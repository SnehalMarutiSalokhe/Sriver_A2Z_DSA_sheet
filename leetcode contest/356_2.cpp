#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCompleteSubarrays(vector<int>& a) {
      set<int> s;
      for (int i = 0; i < int(a.size()); i++)
        s.insert(a[i]);
      int ans=0;
      for (int i = 0; i < int(a.size()); i++) {
        vector<int> has(2000+1);
        int cnt=0;
        for (int j =i;j<int(a.size());j++) {
          cnt += !has[a[j]];
          has[a[j]]=1;
          ans += cnt==s.size();
        }
      }
      return ans;
    }
};
int main(){
    
    return 0;
}