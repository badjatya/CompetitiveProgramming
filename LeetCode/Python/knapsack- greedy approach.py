#Fractional Knapsack Problem
maxwt=50
profit=[25,24,15]
weight=[18,15,10]
n = len(profit)
#Initializing total weight in sack as wt and maximum profit value as max_profit
wt=0
max_profit=0

#Calculating profit value per weight value for objects
ppw = []
for i in range(n):
    ppw.append(profit[i]/weight[i])

order=[] #order list contains list index of object in decreasing order of profit value per weight
for i in range(n):
    order.append(ppw.index(max(ppw)))
    ppw[ppw.index(max(ppw))]=0

i=0
#Putting items of higher profit value per weight in sack
print("\nItems in Knapsack: ")
print("Item\tWeight\tProfit Value\tFraction")
while wt!=maxwt:
    if (wt+weight[order[i]])<=maxwt:
        max_profit+=profit[order[i]]
        wt+=weight[order[i]]
        print("%d\t%d\t%d\t\t1"%(order[i]+1,weight[order[i]],profit[order[i]]))
    else:
        fraction = (maxwt-wt)/weight[order[i]]
        value = profit[order[i]]*fraction
        max_profit+= value
        wt+=(maxwt-wt)
        print("%d\t%d\t%0.2f\t\t%0.2f"%(order[i]+1,weight[order[i]],value,fraction))
    i+=1

print("\nMaximum profit= %0.2f"%max_profit)



