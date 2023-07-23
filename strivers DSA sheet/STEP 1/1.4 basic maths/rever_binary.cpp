//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long reversedBits(long long X)
    {
        // code here
        // 2147483648  2^31
        long long dig = 0, num = 0;
        int bit = 32;
        // created an array to store reverse of binary and simulatenously converted binary to decimal
        if (X % 2 == 0)
        {
            for (int i = X; i >= 0; i = i / 2)
            {
                dig = i % 2;
                num = num + (dig * pow(2, --bit));
            }
        }
        else
        {

            for (int i = X; i >= 1; i = i / 2)
            {
                dig = i % 2;
                num = num + (dig * pow(2, --bit));
            }
        }

        return num;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long X;

        cin >> X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends