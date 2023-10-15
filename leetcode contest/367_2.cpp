#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
          int n = s.length();
    int left = 0, onesCount = 0;
    int minLen = INT_MAX;
    string result = "";

    int start = 0; 
       

    for (int right = 0; right < n; right++) {
        if (s[right] == '1') {
            onesCount++;
        }

        while (onesCount == k) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;  // Update the start of the smallest substring
            }

            if (s[left] == '1') {
                onesCount--;
            }

            left++;
        }
    }

    if (minLen == INT_MAX) {
        return ""; 
    }

    result = s.substr(start, minLen);

    return result;
    }
};
int main(){
    
    return 0;
}