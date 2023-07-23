#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.emplace_back(9);
    v.emplace_back(8);
    v.emplace_back(4);

    for (auto it : v)
    {
        cout << " " << it;
    }
    cout << "\nafter performing isertion\n";
    v.insert(v.begin(), 900);
    v.insert(v.begin() + 2, 3, 700); // iserts 3 time 700

    for (auto it : v)
    {
        cout << " " << it;
    }

    return 0;
}
