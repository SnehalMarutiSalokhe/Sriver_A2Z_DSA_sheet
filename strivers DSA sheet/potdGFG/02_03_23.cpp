//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void mink(vector<vector<int>> &costs, int i)
    {
        sort(costs[i].begin(), costs[i].end());
    }
    int minCost(vector<vector<int>> &costs)
    {
        // write your code here

        int n = costs.size();
        int k = costs[0].size();
        if (k == 1 && n > 1)
            return -1;

        vector<int> minC, minR;
        int same;
        for (int i = 0; i < n; i++)
        {
            int ins = INT_MAX;
            for (int j = 0; j < k; j++)
            {
                ins=min(ins,costs[i][j]);
                
            }
        }
        //-----------------
        int ans = 0;
        for (auto it : minC)
        {
            cout << "minC: " << it << endl;
            ans = ans + it;
        }

        int same1;
        for (int i = n - 1; i >= 0; i--)
        {
            int ins1 = INT_MAX;
            for (int j = 0; j < k; j++)
            {

                if (i == n - 1)
                {
                    ins1 = min(ins1, costs[i][j]);
                }
                else if (same != j)
                {
                    ins1 = min(ins1, costs[i][j]);
                }
            }
            minR.push_back(ins1);
            for (int r = 0; r < k; r++)
            {
                if (ins1 == costs[i][r])
                {
                    same1 = r;
                }
            }
        }
        //-----------------
        int ans1 = 0;
        for (auto it : minR)
        {
            cout << "minR: " << it << endl;
            ans1 = ans1 + it;
        }

        return min(ans, ans1);
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> costs(n, vector<int>(k));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
                cin >> costs[i][j];
        }
        Solution obj;
        cout << obj.minCost(costs) << endl;
    }
}
// } Driver Code Ends