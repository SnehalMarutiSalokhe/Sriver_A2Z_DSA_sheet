// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


 // } Driver Code Ends

class Solution {
  public:
    long long maximumSum(int n, vector<int> &A) {
        // code here
        long long s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            s1=s1+(A[i]*i+1);
        }
        sort(A.begin(),A.end());
        int j=0;
        for(int i=0;i<n;i++)
        {
            
            s2=s2+(A[i]*(i+1));
           
        }
        cout<<s1<<"  "<<s2<<endl;
        return max(s1,s2);
    }
};


// { Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> A(n);
        Array::input(A,n);
        
        Solution obj;
        long long res = obj.maximumSum(n, A);
        
        cout<<res<<endl;
        
    }
}
  // } Driver Code Ends