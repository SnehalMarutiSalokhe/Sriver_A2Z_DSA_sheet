//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
//========================
// THIS CODE GIVES TLE AT CASE 1000;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
	string convCap(string &s)
	{
		string cha;
		int j = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
				cha[j++] = (s[i]);
			else
			{
				if ((s[i] >= 'A' && s[i] <= 'Z'))
				{
					cha[j++] = (s[i] + 32);
				}
			}
		}

		return cha;
	}

	bool isPalindrome(string s)
	{
	  string str=convCap(s);
	  cout<<endl<<str<<endl;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != str[str.size() - i - 1])
				return false;
		}
		return true;
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
	while (t--)
	{
		string s;
		cin >> s;

		Solution ob;

		cout << ob.isPalindrome(s) << "\n";
	}

	return 0;
}
// } Driver Code Ends