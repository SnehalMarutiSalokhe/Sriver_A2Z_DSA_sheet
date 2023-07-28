#include<bits/stdc++.h>
using namespace std;
  void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int ind =-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1]){
               //finding breakpoint
                ind=i;
                break;
            }
        }
        
        if(ind==-1)
        {
            //ind  = -1 mins that there is no break point 
            //that is next permutaion will be the first sammallest permutation 
            reverse(nums.begin(),nums.end());
        }       
        else          
          {
             for(int i=n-1;i>ind;i--)
              {
                 if(nums[i]> nums[ind])
                    {
                      swap(nums[i],nums[ind]);
                         break;
                     }
              }
            reverse(nums.begin()+ind+1,nums.end());
         }        
    }
    
    int main(){
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
  nextPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : A) {
        cout << it << " ";
    }
    cout << "]n";
    return 0;
}