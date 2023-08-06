#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        
        int mod = purchaseAmount % 10;
        if(mod>= 5)
        {
            return 100 - (purchaseAmount +(10-mod));
        }
        else
        {
            return 100 - (purchaseAmount - mod);
        }
        
    }
};
int main()
{
    return 0;
}
