//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
      int jumps = 0;
        int index = 0;
        int limit = n - 1;
        while(index <= limit){
            jumps++;
            int maxi = 0;
            int num = arr[index];
            // for(int i = index; i < num; i++){
            //     maxi = max(maxi, arr[i]);
            // }
            maxi = *max_element(arr+index,arr+index + arr[index]);
        //    cout<<maxi<<"maximun"<<endl;
            index = index + maxi;
        }
        return jumps;
   
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends