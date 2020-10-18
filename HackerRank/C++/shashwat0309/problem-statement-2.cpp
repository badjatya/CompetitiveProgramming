/***Problem.2 - Assume that a bank maintains two kinds of accounts for customers, one called as savings and the other as current account. The savings account provides compound interest and withdrawal facilities but no cheque book facility. The current account provides cheque book facility but no interest. Current account holders should also maintain a minimum balance and if the balance falls below this level a service charge is imposed. Create a class account that stores customer name, account number and type of account. From this derive the classes cur_acct and sav_acct to make them more specific to their requirements. Include necessary member functions in order to achieve the following tasks: 
(a) Accept the deposit from a customer and update the balance.
(b) Display the balance.
(c) Compute and deposit interest.
(d) Permit withdrawal and update the balance.
(e) Check for the minimum balance, impose penalty, necessary and update the balance.***/
#include <iostream>
#include <math.h>
using namespace std;

class Account
{   
    protected:
    string name;
    int accno;
    float bal;
    char type;

    public:
    void get_data()
    {
        cout<<"\nEnter Customer's Name: ";
        cin>>name;
        cout<<"Enter Account No: ";
        cin>>accno;
        cout<<"Enter Type of Account (S/C): ";
        cin>>type;
        cout<<"Enter Balance: ";
        cin>>bal;
    }
    void show_data()
    {
        cout<<"\nCustomer Name: "<<name;
        cout<<"\nAccount No: "<<accno;
        cout<<"\nAccount Type: "<<type;
        cout<<"\nAccount Balance: "<<bal;
    }
    void deposit()
    {
        int dep_amt;
        cout<<"\nEnter the Amount you want to Deposit: ";
        cin>>dep_amt;
        bal += dep_amt;
        cout<<"Amount Deposited Successfully...\n";
    }
    void withdrawal()
    {
        int with_amt;
        cout<<"\nEnter the Amount you want to Withdraw: ";
        cin>>with_amt;
        if(with_amt <= bal)
        {
            bal = bal - with_amt;
            cout<<"Amount Withdrawn Successfully...\n";
        }
        else
        {
            cout<<"Limit Exceeded...\n";
            cout<<"The Amount cannot be Withdrawn...\n";
        }  
    }
    void update_bal()
    {
        cout<<"\nThe Updated Balance is: "<<bal;
    }
    
};

class sav_acc: public Account
{
    float interest;
    public:
    void comp_interest()
    {
        float amt, time, rate;
        cout<<"\nEnter the Rate: ";
        cin>>rate;
        cout<<"Enter Time: ";
        cin>>time;
        bal = bal * pow(1 + (rate/100), time);
        cout<<"\nBalance after Interest: "<<bal<<"\n";
    }
};

class cur_acc: public Account
{
    int penalty;
    char chq_bk; 
    public:

    void min_bal()
    {
        if (bal < 500)
        {
            cout<<"\nBalance is Low...";
            cout<<"\nPenalty is Imposed...";
            penalty = 100;
            bal = bal - penalty;
            cout<<"\nBalance After Penalty is: "<<bal<<"\n";
        }
        else
        {
            cout<<"\nNo Penalty Imposed...";
        }
    }

    void cheq_book()
    {
        cout<<"\nDo you want to issue a Cheque Book (Y/N): ";
        cin>>chq_bk;
        if(chq_bk=='Y' || chq_bk=='y')
        {
            cout<<"\nYour Cheque Book will be issued after 3 days...";
        }
        else if(chq_bk=='N' || chq_bk=='n')
        {
            cout<<"\nNo issuing of Cheque Book...";
        }
    }
};

int main(){

    char ch = 'Y', ac;
    int n;
    sav_acc a;
    cur_acc b;
    cout<<"\nA Savings Account \nB Current Account";
    cout<<"\n\nEnter Your Choice: ";
    cin>>ac;
    if(ac == 'A')
    {
        a.get_data();
        
        do{
            cout<<"\n\n1. Deposit \n2. Withdrawal \n3. Interest \n4. Show Details";
            cout<<"\n\nEnter Your Choice: ";
            cin>>n;
            switch(n)
            {
                case 1: a.deposit();
                        a.update_bal();
                        break;
                case 2: a.withdrawal();
                        a.update_bal();
                        break;
                case 3: a.comp_interest();
                        break;
                case 4: a.show_data();
                        break;                    
                default:
                        cout<<"\nWrong Choice!!!";
                        cout<<"\nThank You For Using...";                    
            }
            cout<<"\n\nPress 'Y' to Continue or 'N' to Exit: ";
            cin>>ch;
        }while(ch == 'Y');   
    }
    else if(ac == 'B')
    { 
        b.get_data();
        do{
            cout<<"\n\n1. Deposit \n2. Withdrawal \n3. Check Balance \n4. Cheque Book \n5. Show Details";
            cout<<"\n\nEnter Your Choice: ";
            cin>>n;
            switch(n)
            {
                case 1: b.deposit();
                        b.update_bal();
                        break;
                case 2: b.withdrawal();
                        b.update_bal();
                        break;
                case 3: b.min_bal();
                        break;
                case 4: b.cheq_book();
                        break;
                case 5: b.show_data();
                        break;                    
                default:
                        cout<<"\nWrong Choice!!!";
                        cout<<"\nThank You For Using...";                    
            }
            cout<<"\n\nPress 'Y' to Continue or 'N' to Exit: ";
            cin>>ch;
        }while(ch == 'Y');   
    }

    cout<<"Thank You For Using...";
    return 0;
}