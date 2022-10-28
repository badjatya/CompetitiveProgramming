#include <bits/stdc++.h>
using namespace std;
int series(int *n)
{
    int i;
    for(int i=0; i<*n; i++)
    {
        cout<<i;
    }
}
int main()
{
    int n = 0;
    cin>>n;
    series(&n);
    return 0;
}