// Create a class MathOperation with two data member X and Y to store the operand and third data member R to store result of operation. Create method members ● Create constructor - to input X and Y from user ● add - to add X and Y and store in R ● multiply - to multiply X and Y and store in R ● power - to calculate X Y and store in R ● display- to display Result R 12. Create a class Person with properties
#include <iostream>
#include <math.h>
using namespace std; 
class MathOperation
{
    private:
    int x,y,r;
    public:
    MathOperation()
    {
        cout<<"Enter value of x: ";
        cin>>x;
        cout<<"Enter value of y: ";
        cin>>y;
    }
    void add()
    {
        r=x+y;
    }
    void multiply()
    {
        r=x*y;
    }
    void power()
    {
        r = pow(x,y);
    }
    void display()
    {
        cout<<"The result is: "<<r;
    }
};
int main()
{
    int oper;
    MathOperation obj;
    cout<<"Which operation you want to perform \n 1. add \n 2. multiply \n 3. power \n??";
    cin>>oper;
    if(oper==1)
    {
        obj.add();
    }else if(oper==2)
    {
        obj.multiply();
    }else if(oper==3)
    {
        obj.power();
    }else{
        cout<<"Wrong operation given";
    }
    obj.display();
    return 0;
}
