//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
          vector<long long> ans;
        long long int l=1,g=1;
long long minin= min(A,B);
    for (int i =2 ; i<=sqrt(minin); i++)
    {
        if (A%i==0 && B%i==0)
        {
            g=i;
            
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