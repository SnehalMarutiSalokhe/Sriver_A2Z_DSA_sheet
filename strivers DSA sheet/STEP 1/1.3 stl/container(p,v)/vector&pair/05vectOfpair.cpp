#include <bits/stdc++.h>
using namespace std;

int main()
{
    //it is as simple as a array of pair


    vector<pair<int, int>> pv;
    pv.push_back({1, 2});
    pv.emplace_back(5, 6);
    cout << pv[0].first << " " << pv[0].second << endl;
    cout << pv[1].first << " " << pv[1].second << endl;
    cout<<"size of vextor "<<pv.size()<<endl;
    return 0;
}