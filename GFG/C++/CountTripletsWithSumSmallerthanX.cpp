//Link to Prob:
//https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1
//Link to my code:
//https://practice.geeksforgeeks.org/viewSol.php?subId=17c33beeeecb8be282ee46524a0ba6e6&pid=703292&user=sakshijain2589
#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{  
	    sort(arr,arr+n);
	    long long count = 0;
	    long long sumCheck = 0;
	    for(int i = 0;i<n-2;i++){
	        int j = i+1;
	        int k = n-1;
	        while(j<k){
	            sumCheck = (arr[i]+arr[j]+arr[k]);
	            if(sumCheck<sum){
	                count+=(k-j);
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	    }
	    return count;
	}
	
		 

};

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}
