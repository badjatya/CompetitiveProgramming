##class student:
##    rollno=1
##    name="Guest"
##    marks=None
##
##
##s1=student()
##print(s1.rollno)
##print(s1.name)
##print(s1.marks)
##s1.marks=56
##print(s1.marks)
##
##print("--------------------")
##
##s2=student()
##s2.rollno=2
##s2.name="Ram"
##s2.marks="80"
##print(s2.rollno)
##print(s2.name)
##print(s2.marks)

##class students:
##    roll=1
##    name="guest"
##    marks=None
##
##
##    def set(self,r,n,m):
##        self.rollno=r
##        self.name=n
##        self.marks=m
##
##        if m>40:
##          self.result="pass"
##        else:
##            self.result="fail"
##
##    def show(self):
##        print("roll no=",self.rollno)
##        print("name=",self.name)
##        print("marks",self.marks)
##        print("Result",self.result)
##
##s1=students()
##s1.show()
##s2=students()
##s2.set("default","default",20)
##s2.show()
##
##
print("-------------- use of constructors and default values----------------")
class Rect:

   def __init__(self,length=1,breadth=1):
       self.length=length
       self.breadth=breadth

   def area(self):
        a=self.length*self.breadth
        return a

   def show(self):
        print("length=",self.length)
        print("breadth=",self.breadth)
        print("Area=",self.area())


r1=Rect(50,60)
r1.show()
y=Rect()
y.show()


print("-------------- use of constructors and default values----------------")
class item:

    def __init__(self,name,price,Qty):
        self.name=name
        self.price=price
        self.Qty=Qty

    def amount(self):
        a=self.Qty*self.price
        return a

    def show(self):
        print("Name=",self.name)
        print("price=",self.price)
        print("Qty=",self.Qty())
        print("Amount=",self.amount())

    def showLine(self):
        print( "%-10s %10.2f %10.2f %10.2f" % (self.name,self.price,self.Qty,self.amount()))    

n=int(input("How many items:"))
items=[]

for i in range(n):
    nm=input("Enter name")
    p=float(input("enter price"))
    q=float(input("enter Qty"))
    x=item(nm,p,q)
    items.append(x)

for e in items:
    e.show

t=0
for e in items:
    e.show()

t=0
for e in items:
    e.showline()
    t=
    

        

r1=item(50,60)
r1.show()
y=Rect()
y.show()


