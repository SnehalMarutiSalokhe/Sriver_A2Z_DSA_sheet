//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
      
        int cn=0;
        int d=0;
        for (int i = N; i > 0; i=i/10)
        {
           d=i%10;
           if(d==0)    continue;
           if((N%d)==0)
           cn++;
        }
        return cn;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends