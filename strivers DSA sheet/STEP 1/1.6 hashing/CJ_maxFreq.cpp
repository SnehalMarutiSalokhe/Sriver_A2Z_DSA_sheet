
#include<bits/stdc++.h>
using namespace std;
vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here

 vector<int> ans;
 unordered_map<int,int> mpp;
 int size = v.size();
 
 
 for (int i = 0; i < size; i++)
 {
    mpp[v[i]]++;
 }

 int ind1,ind2;
 int small =INT_MAX;
  int  big=INT_MIN;
    for(auto it:mpp)
    {

        if(big == it.second)
            ind1 = min(it.first,ind1);
        else if(big<it.second)
        {
            big=it.second;
            ind1 = it.first;
        }
        
    }
     for(auto it:mpp)
    {

        
        if(small == it.second)
            ind2 = min(it.first,ind2);
        else if(small>it.second)
        {
            small=it.second;
            ind2 = it.first;
        }
    }

 ans.push_back(ind1);
 ans.push_back(ind2);
 return ans;
}
int main(){
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    vector<int> frequencies = getFrequencies(nums);
    
    // Print the frequencies
    for (int freq : frequencies) {
        cout << freq << " ";
    }
    
    
    return 0;
}