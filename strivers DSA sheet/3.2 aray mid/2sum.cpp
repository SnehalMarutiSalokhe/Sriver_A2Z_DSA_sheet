#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int back = target - num;
            if (mpp.find(back) != mpp.end()) {
                return {mpp[back], i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (result[0] != -1 && result[1] != -1) {
        cout << "Indices of the two numbers whose sum is equal to target: " << result[0] << " and " << result[1] << endl;
        cout << "The numbers are: " << nums[result[0]] << " and " << nums[result[1]] << endl;
    } else {
        cout << "No two numbers found whose sum is equal to target." << endl;
    }

    return 0;
}
