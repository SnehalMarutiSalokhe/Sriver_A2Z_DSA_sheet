//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// ====================

/*
this gives tle at 12 cse
*/
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> ans;
        long long int l,g;

    for (int i = min(A,B); i >0; i--)
    {
        if (A%i==0 && B%i==0)
        {
            g=i;
            break;
        }        
    }
    
  l = (A*B)/g;
    ans.push_back(l);
    ans.push_back(g);
   return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends