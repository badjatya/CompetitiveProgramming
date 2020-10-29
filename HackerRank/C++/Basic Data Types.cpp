//https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c;
    cout<<fixed<<setprecision(3)<<"\n"<<d;
    cout<<fixed<<setprecision(9)<<"\n"<<e;
    return 0;
}
