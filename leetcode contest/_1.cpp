#include<bits/stdc++.h>
using namespace std;
int minimumSum(vector<int>& nums) {
    int sum = 2147483647;
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {

            for (int k = j + 1; k < nums.size(); k++)
            {

                if (nums[i] < nums[j] && nums[k] < nums[j])
                {
                    int s = nums[i] + nums[j] + nums[k];
                    sum = min(sum, s);
                    cnt = 1;
                }
            }
        }
    }
    if (cnt == 0)
    {
        return -1;
    }

    return sum;
        
    }
int main(){
    vector<int> num ={5,4,8,7,10,2};
   cout<< minimumSum(num);
    return 0;
}