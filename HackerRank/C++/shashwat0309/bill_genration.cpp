// Write a program for generating electricity Bill. Accept last month unit and current month unit from user, then calculate and print bill amount according to following condition For units 0-100 charges 2 rs/unit 101-200 charges 3rs/unit 201-300 4rs/unit >300 charges 5rs/unit (Using class object concept)

#include <iostream> 
using namespace std; 
class Bill
{
    private:
    int lmunit,cnunit,billamt,totalunit;
    public:
    void get_units()
    {
        cout<<"Enter last month unit: ";
        cin>>lmunit;
        cout<<"Enter this month unit: ";
        cin>>cnunit;
    }
    void calculate_billamt()
    {
        totalunit = cnunit - lmunit;
        if(totalunit <= 100)
        {
           billamt = totalunit * 2;
        }
        else if(totalunit >= 101 && totalunit <= 200)
        {
           billamt = (totalunit-100) * 3 + 200;
        }else if(totalunit >= 201 && totalunit <= 300)
        {
           billamt = (totalunit-200) * 4 + 500;
        }else if(totalunit > 300)
        {
           billamt = (totalunit-300) * 5 + 900;
        }
        cout<<"Total bill amount of Total units: "<<totalunit<<" consumed is "<< billamt;
    }
};
int main()
{
    Bill cust;
    cust.get_units();
    cust.calculate_billamt();
    return 0;
}