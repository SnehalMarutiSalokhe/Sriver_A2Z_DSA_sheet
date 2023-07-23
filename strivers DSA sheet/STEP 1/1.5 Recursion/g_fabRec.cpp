//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
      vector<long long> fab;
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here 
        if(n==0) return fab;
          if(n==1) 
          {
            fab.push_back(1);
            fab.push_back(1);
            return fab;
          }
           else
           {
              fab[n]=fab[n-1]+fab[n-2];
              fab.push_back(fab[n]);
               printFibb(n-1);
               return fab;
           }
           
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends