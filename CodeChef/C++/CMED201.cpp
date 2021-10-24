#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    vector<int>arr;
    int N,sum = 0,ele;
    cin>>N;
    for(int i = 0 ; i < N ; i++)
    {
        cin>>ele;
        arr.push_back(ele);
        if(ele % 2 == 0)
            sum = sum + arr[i];
    }
    cout<<sum;
	return 0;
}
