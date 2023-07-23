class Solution {
public:
    int missingNumber(vector<int>& nums) {

        vector<int> c(nums);
        sort(c.begin(),c.end());
    int max = *max_element(nums.begin(),nums.end());
    max++;
        for(int i=c.size();i<max;i++)
        {
            c.push_back(0);
        }
        for(int i=0;i<c.size();i++)
        {
            if(c[i]!=i) return i;
        }
      return max;
    }
};