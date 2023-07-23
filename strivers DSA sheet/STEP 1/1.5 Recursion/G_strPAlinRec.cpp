//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;
//========================
//THIS CODE GIVES TLE AT CASE 1000;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int cheak(string s,int start,int end)
	{
		if(start<=end)
		{			
			if(s[start]==s[end-1])
			{
				cout<<"call\n";
				int b= 1*cheak(s,++start,--end);
				if(b==0) return 0;
				else
				return 1*cheak(s,++start,--end);
			}
			else 
			 if(s[start]!=s[end-1])
			{
				cout <<"wrong\n";
				int b=0;
				return b;		
				
			}
		}
		return 1;
		
	}
	
	int isPalindrome(string S)
	{
		int n=S.size();
		
       return cheak(S,0,n);
     
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends