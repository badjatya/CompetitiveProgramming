// Write a program to accept basic salary from user, if basic salary is between 0 and 10000 then TA is 10% of basic salary, DA is 5% of basic salary. If salary is above 10000 then TA is 12% of basic salary, DA is 6% of basic. Now calculate gross salary as gs=basic salary+TA+DA? (Using class object concept)


#include <iostream> 
using namespace std; 
class Salary
{
    private:
    float basic, gross, ta, da;
    public:
    void get_salary()
    {
        cout<<"Enter basic salary of an employee: ";
        cin>>basic;
    }
    void calculate_gross()
    {
        if(basic <= 10000)
        {
            ta  = basic * 0.10;
            da = basic * 0.05;
        }
        else if(basic > 10000)
        {
            ta  = basic * 0.12;
            da = basic * 0.06;
        }
        gross = basic + ta + da;
        cout<<"GROSS SALARY OF EMPLOYEE = "<<gross;
    }
};
int main()
{
    Salary emp;
    emp.get_salary();
    emp.calculate_gross();
    return 0;
}