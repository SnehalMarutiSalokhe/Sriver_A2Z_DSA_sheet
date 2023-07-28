//finding maxisum sum sub array 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum =0;
        long long maxi = LONG_MIN;

        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];

            if(maxi<sum ) maxi = sum;
           
            if(sum<0)    sum =0;
        }       
//if sub arrya is not empty

    // if (maxi<0)
    // {
    //     maxi =0;  //not  for leetcode
    // }
    
        return maxi;
    }
};
int main(){
    Solution s;
    vector<int> v={4,-1,2,1};
   cout<<" sum " <<s.maxSubArray(v);
   
    
    return 0;
}