//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    int a[n];
	   // Your code goes here
	   if(k%n==0)
	   {
	       return ;
	   }
	   for(int i=0;i<n;i++)
	    a[i]= arr[i];
	    
        for (int  i = 0; i < n; i++)
        {
            arr[i]=a[i+k];
        }
        int j=0;
	   for (int i = n-k; i < n; i++)
       {
            arr[i]=a[j++];
       }
       
	   
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends