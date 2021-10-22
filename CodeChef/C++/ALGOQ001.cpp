//https://www.codechef.com/ALQN2021/problems/ALGOQ001
#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int T,N,X;
    string S;
    cin>>T;
    while(T--)
    {
        X = 0;
        cin>>N>>S;
        for(int i = 0 ; i<N ; i++)
        {
            if(S[i] == '+' || S[i] == '-' || S[i] == '.')
                X++;
        }
        cout<<X<<"\n";
    }
	return 0;
}
