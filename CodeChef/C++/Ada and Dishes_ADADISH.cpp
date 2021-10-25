https://www.codechef.com/NOV20B/problems/ADADISH
#include<algorithm>
#include <iostream>
#include<vector>
using namespace std;

void min_time(int arr[5],int n)
{
    int count=0,n1=arr[n-1],n2=arr[n-2],i=n-3;
    while(i>=0)
    {
        if(n1>n2)
        {
            count=count+n2;
            n1=n1-n2;
            n2=arr[i];
            i--;
        }
        else
        {
            count=count+n1;
            n2=n2-n1;
            n1=arr[i];
            i--;
        }
    }
    if(n1>n2)
        count=count+n1;
    else
        count=count+n2;
    cout<<count<<"\n";
}

int main()
{
    vector<int>arr;
    int T,N,ele[5];
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>ele[i];
   //         arr.push_back(ele);
        }
//        sort(arr.begin(),arr.end());
        min_time(ele,N);
        //arr.clear();
    }
	return 0;
}
