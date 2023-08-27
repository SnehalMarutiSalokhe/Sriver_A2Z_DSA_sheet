#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    vector<int> nums = {1, 32, 1, 2};
    target = 12;
 long long sum = accumulate(nums.begin(), nums.end(), 0ll);
        if(sum < target)      cout<<endl<<" -1";
         n = nums.size(); int ops = 0;
        sort(nums.begin(), nums.end());
        for(int i = n - 1 ; i >= 0 ; i--) {
            sum -= nums[i];
            while(sum < target) {
                while(nums[i] > target)
                    nums[i] /= 2, ops++;
                target -= nums[i];
            }
        }
      cout<<endl<<ops;
    
    return 0;
}