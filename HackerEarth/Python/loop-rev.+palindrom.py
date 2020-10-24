n=int(input("type the no:"))
p=n
s=0
while n!=0:
    d=n%10
    s=s*10+d
    n=n//10
print(s)
if s==p:
    print("Palinodrom")
else:
    print("Not Palinodrom")
