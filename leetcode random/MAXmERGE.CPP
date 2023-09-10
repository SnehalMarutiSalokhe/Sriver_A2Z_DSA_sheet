#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long sum =0;
        long long ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int j=i;
            sum=nums[j];
            while (nums[j]<nums[j+1])
            {
                sum=sum+nums[j+1];
            }
            
           ans=max(ans,sum);
            
        }
        
    }
};
int main(){
    Solution s1;

    vector<int> vec ={     };
  cout<<"\n ans =" << s1.maxArrayValue(vec);
       
    return 0;
}