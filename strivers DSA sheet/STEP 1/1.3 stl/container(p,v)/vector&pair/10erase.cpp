#include <bits/stdc++.h>
using namespace std;

int main()
{
     vector<int> v;
     v.emplace_back(0);
     v.emplace_back(1);
     v.emplace_back(2);
     v.emplace_back(3);
     v.emplace_back(4);
     v.emplace_back(5);
     v.emplace_back(6);

     for (auto it : v)
     {
          cout << it << " ";
     }

     cout << "\nAfter errase at begin\n";

     v.erase(v.begin());

     for (auto it : v)
     {
          cout << it << " ";
     }

     
     v.erase(v.begin() + 2);
     cout << "\nAfter errase at begin + 2\n";

     for (auto it : v)
     {
          cout << it << " ";
     }

     v.erase(v.begin() + 1, v.end() - 2);
     cout << "\nAfter errase at begin +1 , end-2\n";
     for (auto it : v)
     {
          cout << it << " ";
     }
     return 0;
}