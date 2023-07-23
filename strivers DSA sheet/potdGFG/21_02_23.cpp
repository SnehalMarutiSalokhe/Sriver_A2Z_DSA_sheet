//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minIteration(int N, int M, int x, int y)
    {
        // code here
        int count = 0;
        int arr[N][M];
        arr[x][y] = 1;
        for (int i = 1; (x != 0 && y != 0); i++)
        {
            for (int j = 1; j <= M; j++)
            {
                if (i < x)
                {
                    if ((i == x && j == y - 1) || (i == x - 1 && j == y))
                    {
                        arr[i][j] = 1;
                        count++;
                        
                    }
                }
                if(i>x)
                {
                    if ((i == x && j == y +1) || (i == x + 1 && j == y))
                    {
                        arr[i][j] = 1;
                        count++;
                    }
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;

        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0;
}
// } Driver Code Ends