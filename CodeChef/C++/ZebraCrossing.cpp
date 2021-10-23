// que link : https://www.codechef.com/COOK133C/problems/ZEBRA/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    char curr = s[0];
    int count =0;
    for(int i=1;i<n;i++) {
        if(curr != s[i]) {
            count++;
            curr = s[i];
        }
    }

    if(count<k) {
        cout<<-1<<"\n";
        return;
    }
    if(s[0]=='0') {
        if(k%2) {
            for(int i=s.size()-1; i>=0; i--) {
                if(s[i] == '1') {
                    cout<<i+1<<"\n";
                    return;
                }
            }
        }
        else {
            for(int i=s.size()-1; i>=0; i--) {
                if(s[i] == '0') {
                    cout<<i+1<<"\n";
                    return;
                }
            }
        }
    }
    else {
        if(k%2) {
            for(int i=s.size()-1; i>=0; i--) {
                if(s[i] == '0') {
                    cout<<i+1<<"\n";
                    return;
                }
            }
        }
        else {
            for(int i=s.size()-1; i>=0; i--) {
                if(s[i] == '1') {
                    cout<<i+1<<"\n";
                    return;
                }
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}

