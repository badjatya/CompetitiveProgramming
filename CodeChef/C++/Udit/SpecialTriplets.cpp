// que link : https://www.codechef.com/AUG21C/problems/SPCTRIPS/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        for(int c=1;c<=n;c++){
            for(int b=c;b<=n;b+=c){
                if(b%c==0){
                    for(int a=c;a<=n;a+=b){
                        if(a%b==c){
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
