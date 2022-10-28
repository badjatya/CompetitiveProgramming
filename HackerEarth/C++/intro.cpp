#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr, a=10;
    ptr = &a;
    cout<<"Address stored in ponter valriable is "<<ptr<<endl;
    cout<<"Value stored at ponter valriable location is "<<*ptr;
}