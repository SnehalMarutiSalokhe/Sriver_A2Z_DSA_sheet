#include<bits/stdc++.h>
using namespace std;
 int numberOfPoints(vector<vector<int>>& nums) {
    map<int,int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = nums[i][0]; j <= nums[i][1]; j++)
            {
                mpp[j]++;
            }            
        }
int count=0;
       for(auto it:mpp)   
       {
        if(it.second > 0){
            count++;
        }
       }
       return count;
    }
int main(){
    
    return 0;
}