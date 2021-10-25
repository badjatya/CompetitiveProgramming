#include<bits/stdc++.h>
using namespace std;

float round_1(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main() 
{
    int T;
    float k1,k2,k3,v;
    cin>>T;
    while(T--)
    {
        cin>>k1>>k2>>k3>>v;
        float mult = k1*k2*k3*v;
//        mult = 100/mult;
        float temp = round_1(100/mult);
        float compare = 9.58;
        if(temp >= compare)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
	return 0;
}
