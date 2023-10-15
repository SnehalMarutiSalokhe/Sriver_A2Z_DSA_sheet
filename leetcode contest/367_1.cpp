#include<bits/stdc++.h>
using namespace std;
  vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
      vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i-j >= indexDifference || j-i >=indexDifference)
                {
                   if (nums[i]-nums[j]>=valueDifference || nums[j]-nums[i]>=valueDifference)
                   {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                   }
                   
                }
                
            }
            
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
        
    }
int main(){
    
    return 0;
}