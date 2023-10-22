#include <bits/stdc++.h>
using namespace std;
 int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n),suff(n);
        
        int sum=0;
        pre[0]=nums[0];
        suff[n-1]=nums[n-1];
        int leftMost=nums[0];
        int rghtMost=nums[n-1];
        
        for(int i=1;i<n;i++){
            pre[i]=min(leftMost,nums[i]);
            leftMost=min(leftMost,nums[i]);
        }
        
        
        for(int i=n-2;i>=0;i--){
           suff[i]=min(rghtMost,nums[i]);
            rghtMost=min(rghtMost,nums[i]);
        }
        
        bool flag=false;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(pre[i]<nums[i] && suff[i]<nums[i]){
                ans=min(ans,nums[i]+pre[i]+suff[i]);
                flag=true;
}
        }
        return (flag==false)?-1:ans;
    }
int main()
{
    vector<int> num = {8, 6, 1, 5, 3};
    cout << minimumSum(num);
    return 0;
}