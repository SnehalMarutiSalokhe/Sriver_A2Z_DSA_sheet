#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        if(sx==fx && sy==fy ) {
            if( t==1)
            return false;
            return true;
            
        }
    int maxD=max(abs(sx-fx),abs(sy-fy));
    // Check if it's possible to reach the target cell within 't' steps
    if (t >= maxD ) {
        return true;
    }
    
    return false;
    }
};
int main(){
    
    return 0;
}