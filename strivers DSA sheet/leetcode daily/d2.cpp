#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m=INT_MIN;
        int ans =-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>m)
            {
                m=arr[i];
                ans = i;
            }
        }

        return ans;
    }
};
int main(){
    
    return 0;
}