//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public: 
    long long factorialOfN(long long N) {
        // code here
        if(N==1 || N==0) return 1;
       if(N>1) 
       //long long f= 
       return factorialOfN(N-1)*N;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.factorialOfN(N) << "\n";
    }
    return 0;
}
