#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


class Solution {
public:
  bool check(string &s,int i)
  {
    int len= s.length();
    if(i>=(len/2)) return true;
    else if(s[i]!= s[len-i-1]) return false;
    return check(s, i+1);
  }
    bool isPalindrome(string s) {
        string sol;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
            {
                sol.push_back(tolower(s[i]));
            }else
            {
                continue;
            }           
            
        }
        return check(sol,0);
    }
};