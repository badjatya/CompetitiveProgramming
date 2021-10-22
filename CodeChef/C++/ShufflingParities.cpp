// que link : https://www.codechef.com/SEPT21C/problems/SHUFFLIN/

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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int codd=0,ceven=0;
        int odd = (n+1)/2;
        int even = n/2;
        for(int i=0;i<n;i++){
            if(arr[i]%2==1){
                codd++;
            }
            else{
                ceven++;
            }
        }
        int ans = min(codd,even)+min(ceven,odd);
        cout<<ans<<endl;
    }
    return 0;
}
