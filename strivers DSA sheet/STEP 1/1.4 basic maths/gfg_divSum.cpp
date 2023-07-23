//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum = 0, ans = 0;

        for (int i = 1; i <= N; i++)
        {
            long ans = 0;

            for (long i = 1; i <= N; i++)
            {
                ans += ((N / i) * i); // this is the formule for sum of divisers;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        long long sum = ob.sumOfDivisors(N);
        cout << sum << endl;
    }
    return 0;
}
// } Driver Code Ends