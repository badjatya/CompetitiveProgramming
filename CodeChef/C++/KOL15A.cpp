#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int T;
    string S;
    cin>>T;
    while(T--)
    {
        int sum_nos = 0;
        cin>>S;
        for(int i = 0 ; i < S.length() ; i++)
        {
            if(isdigit(S[i]))
	      sum_nos = sum_nos + int(S[i] - '0');
        }
        cout<<sum_nos<<"\n";
    }
    return 0;
}
