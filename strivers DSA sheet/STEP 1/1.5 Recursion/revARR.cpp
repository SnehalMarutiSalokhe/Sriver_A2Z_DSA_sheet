//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void reverseArr(long long arr[],int start,int  end) {
        // code here
        if(start<end)
        {
            swap(arr[start],arr[end-1]);
            reverseArr(arr,start+1,end-1);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long arr[N];
        for(int i=0;i<N;i++) cin>>arr[i];
        cout<<"\n reversed arr is : ";
        Solution ob;
         ob.reverseArr(arr,0,N) ;
         cout<< "\n";
         for(int i=0;i<N;i++) cout<<" " <<arr[i];
    }
}
// } Driver Code Ends