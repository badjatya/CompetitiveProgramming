//Link to problem
//https://www.codechef.com/START11C/status/BIGARRAY

#include <iostream>
using namespace std;
using ll = long long;
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,s;
	    cin>>n>>s;
	    ll sum = (n*(n+1)/2);
	    ll diff = (sum-s);
	    if(diff>=1 && diff<=n){
	        cout<<diff<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}

