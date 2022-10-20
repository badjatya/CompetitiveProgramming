#include<bits/stdc++.h>
using namespace std;
int povofno(int base, int pov)
{
    if(pov == 0) return 1;
    return base * povofno(base, pov-1);
}
int main()
{
    int base, pov;
    cin >> base >> pov;
    cout<<povofno(base, pov)<<endl;
    return 0;
}