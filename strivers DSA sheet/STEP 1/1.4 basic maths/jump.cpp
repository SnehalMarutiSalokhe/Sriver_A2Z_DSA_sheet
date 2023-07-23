//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
 
    int minJumps(int arr[], int n){
        // Your code here
    //     int jump=0,i=0;
    //   while (i<n)
    //   {
          
    //       i=arr[i]+i;
    //       if(i<n)
    //       jump=jump+1;
    //       if(arr[i]==0) break;
    //       if(jump>n) break;
       
    //   }
    //   if(i>=n) return jump;
    //   else return -1;

    int jumps=0,maxr=0,cur=0;

        

        for(int i=0;i<n-1;i++)

        {

            if(i+arr[i]>maxr)

            maxr=(i+arr[i]);

            if(i==cur)

            {

                jumps++;

                cur=maxr;

                

            }

            if(arr[i]==0 && i==maxr)

            return -1;

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