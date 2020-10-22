// Link of problem

// https://www.codechef.com/OCT20B/problems/POSAND


#include <iostream>
using namespace std;

int main() {
    int T, N;
    int i, j;

    cin >> T;
    while(T--) {
        cin >> N;

        if(N == 1) 
            cout << "1";
        else if(N == 3) 
            cout << "1 3 2";
        else if((N & (N-1)) == 0)
            cout << "-1";
        else {
            cout << "2 3 1 ";
            for(i = 4; i <= N; i++) {
                if((i & (i-1)) == 0) {
                    cout << i+1 << " " << i << " ";
                    i++;
                }
                else cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}