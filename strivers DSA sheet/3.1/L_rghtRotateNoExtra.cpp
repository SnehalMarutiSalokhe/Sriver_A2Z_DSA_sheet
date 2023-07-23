#include<bits/stdc++.h>
using namespace std;


    void rotate(vector<int>& nums, int k) {
        
         
	   // Your code goes here
       int n=nums.size();
	   k=k%n;

    vector<int> temp;
  
       for (int i = n-k; i < n; i++)
       {
         temp.push_back(nums[i]);
       }
     
     for (int i = n-1; i >=k; i--)
     {
         nums[i]=nums[i-k];
     }
   
     
       for (int i = 0; i<n-k-1; i++)
       {
            nums[i] = temp[i];
       }
       cout<<endl;
	  for (int i = 0; i < nums.size(); i++)
        {
            cout<<" "<<nums[i];
        }
        
    }

int main() 
{
   	
    	
	    // int k;
	    // cin >> k;

	   vector < int> a={1,2,3,4,5,6,7};
	   


       
        
        for (int i = 0; i < a.size(); i++)
        {
            cout<<" "<<a[i];
        }
        rotate(a,3);
	    cout << "\n";
	     cout<<endl;
	  for (int i = 0; i < a.size(); i++)
        {
            cout<<" "<<a[i];
        }
    
    return 0;
}

