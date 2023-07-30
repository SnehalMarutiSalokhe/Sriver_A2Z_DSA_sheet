#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    string minimumString(string a, string b, string c) {
        pair<int,string> ans = {305,""};
        auto calc = [&](string a, string b, string c) {
          string res = a;
          if (res.find(b) != string::npos) {
            if (res.find(c) != string::npos) {
              ans = min(ans,make_pair((int)res.size(),res));
            } else {
              int sz = 0;
              for (int i = 1; i <= min(int(res.size()),int(c.size())); i++)
                if (res.substr(res.size()-i,i) == c.substr(0,i))
                  sz = i;
              for (int i =sz;i<c.size();i++) res += c[i];
              ans = min(ans,make_pair((int)res.size(),res));
            }
          } else {
            int sz = 0;
              for (int i = 1; i <= min(int(res.size()),int(b.size())); i++)
                if (res.substr(res.size()-i,i) == b.substr(0,i))
                  sz = i;
              for (int i =sz;i<b.size();i++) res += b[i];
            if (res.find(c) != string::npos) {
              ans = min(ans,make_pair((int)res.size(),res));
            } else {
              int sz = 0;
              for (int i = 1; i <= min(int(res.size()),int(c.size())); i++)
                if (res.substr(res.size()-i,i) == c.substr(0,i))
                  sz = i;
              for (int i =sz;i<c.size();i++) res += c[i];
              ans = min(ans,make_pair((int)res.size(),res));
            }
          }
        };
      calc(a,b,c);
      calc(a,c,b);
      calc(b,a,c);
      calc(b,c,a);
      calc(c,a,b);
      calc(c,b,a);
      return ans.second;
    }
};

int main(){
    
    return 0;
}
