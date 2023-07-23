#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // this is faster than the push_back()

    for (int i = 0; i < 2; i++)
    {
        cout << v[i] << " ";
    }

    vector<int> v1(5, 100);
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    vector<int> v2(5);
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}