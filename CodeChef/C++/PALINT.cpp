//Link to Problem
//https://www.codechef.com/SEPT21C/problems/PALINT
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,x,count=0,ans=0,sum=0;
        ll maxi=INT_MIN;
        cin>>n>>x;
        int arr[n];
        map<ll,ll> m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        if(x==0){
           for(auto i:m){
             if(i.second>maxi){
                 maxi=i.second;
             }
           }
           cout<<maxi<<" "<<0<<endl;
        }
        else{
            for(auto k=m.begin();k!=m.end();k++){
                ll c=(k->first^x);
                if(m.find(c)!=m.end()){
                    auto it=m.find(c);
                    sum=(it->second+k->second);
                    if(sum>ans){
                        ans=sum;
                        count=k->second;
                    }
                    else if(sum==ans){
                        count=min(count,k->second);
                    }
                }
                else if((k->second)>ans){
                        ans=k->second;
                        count=0;
                    }
                else if(k->second==ans){
                        count=0;
                    }
                }
                cout<<ans<<" "<<count<<endl;
                
            }
           
            }
	// your code goes here
	return 0;
}

