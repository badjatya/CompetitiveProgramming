// que link : https://www.codechef.com/START11C/problems/FILLGRID/

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
        ll n;
        cin>>n;
        int arr[n][n];
        if(n%2){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        arr[i][j]=-1;
                    }
                    else{
                        arr[i][j]=1;
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<-1<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
