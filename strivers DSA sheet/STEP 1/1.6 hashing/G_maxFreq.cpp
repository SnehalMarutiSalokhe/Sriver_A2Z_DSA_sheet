//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool comp(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second > p2.second) return true;
        if (p1.second < p2.second) return false;
        if (p1.first > p2.first)  return true;
        if (p1.first < p2.first) return false;
    }
    vector<int> topK(vector<int> &nums, int k)
    {
        // Code here
        vector<int> maxK;
        int sz = *max_element(nums.begin(), nums.end());
        int count[sz + 1] = {0};

        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
            //frequency is stored in a count array of respec. index number 
        }

      vector< pair<int,int> >p;
        for (int i = 0; i <= sz; i++)
        {
           p.push_back({i,count[i]});
        }
       
       sort(p.begin(),p.end(),comp);
    for (int i = 1; i <=k; i++)
    {
        maxK.push_back(p[i].first);
        
    }
    
        return maxK;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums)
            cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends