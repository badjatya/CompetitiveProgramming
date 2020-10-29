#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    char ch[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    if(n>9)
        cout<<"Greater than 9";
    else
        cout<<ch[n-1];
    return 0;
}
