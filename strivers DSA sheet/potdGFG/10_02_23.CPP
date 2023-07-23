//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
        int min(int arr[5])
        {
            int min=arr[0];
            for(int i=0;i<5;i++)
            {
                if(arr[i]<min)
                {
                    min=arr[i];
                }
            }
            return min;
        }
    int maxInstance(string s){
      int c[5]={0,0,0,0,0};//to store the count of each character of a balloon
          int ans=0;
            for(int j=0;j<s.size();j++)
            {
                //increase the count 
                if(s[j]=='b') c[0]++; 
                if(s[j]=='a') c[1]++;
                if(s[j]=='l') c[2]++;
                if(s[j]=='o') c[3]++;
                if(s[j]=='n') c[4]++;                
            }
            c[2]=c[2]/2;
            c[3]=c[3]/2;
            
         ans=min(c);

        return ans;
        
    }
        
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends