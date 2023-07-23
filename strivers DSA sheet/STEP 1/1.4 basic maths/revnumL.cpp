

#include <bits/stdc++.h>
using namespace std;

#define ll long long
class Solution
{
public:
    ll reverse(int x)
    {

        ll rev = 0;
        if (sizeof(x) > sizeof(int))
            return rev;
        if (x < 0)
        {
            x = x * -1;
            for (ll i = x; i > 0; i = i / 10)
            {
                ll d;
                d = i % 10;
                rev = rev * 10 + (d);
            }
            return -rev;
        }

        else
        {
            for (ll i = x; i > 0; i = i / 10)
            {
                ll d;
                d = i % 10;
                rev = rev * 10 + (d);
            }
            return rev;
        }
    }
};

int main()
{

    Solution q;

cout<<pow(2,31)<<endl;
cout<<pow(3,2)<<endl;
    return 0;
}