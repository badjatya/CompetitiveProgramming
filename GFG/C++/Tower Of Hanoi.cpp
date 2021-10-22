//Link to Problem
//https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
//Link to my code.
//https://practice.geeksforgeeks.org/viewSol.php?subId=7dcbbc7fca8a8f79b3a5974e78dd4a43&pid=701190&user=sakshijain2589
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long toh(int N, int from, int to, int aux) {
        int c = 0;
         if(N==1){
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        c++;
        return c;
        }
        c+=toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        c+=toh(N-1,aux,to,from); 
        return c+1;
    }

};
int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
//Position this line where user code will be pasted.  
