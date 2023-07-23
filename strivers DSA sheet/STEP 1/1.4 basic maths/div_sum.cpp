//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        vector <long long> div;
        for(int i=1;i<=N;i++)
        {
            long long sum=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    sum=sum+j;
                }
            }
            div.push_back(sum);
            cout<<sum<<" ";
        }
        cout<<endl;
        long long tot=0;
       for(int i=0;i<N;i++)
       {
           tot=tot+div[i];
       }
       return tot;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends