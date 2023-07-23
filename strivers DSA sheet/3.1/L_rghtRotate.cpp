#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         int a[100000];
	   // Your code goes here
	   k=k%n;
	   if(k%n==0)
	   {
	       return ;
	   }
	   for(int i=0;i<n;i++)
	    a[i]= nums[i];
	    
        for (int  i = k; i < n; i++)
        {
            nums[i]=a[i-k];
        }
        int j=0;
	   for (int i = n-k; i < n; i++)
       {
            nums[j++]=a[i];
       }
    }
};
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
	   vector < int> a;
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.rotate(a,k);
        
        for(auto it: a)
        cout<<it<<" ";

	    cout << "\n";
	     
    }
    return 0;
}

