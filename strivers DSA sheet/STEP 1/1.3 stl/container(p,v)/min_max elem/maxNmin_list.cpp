#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5);    //{5,2,,4}
    ls.emplace_front(3); //{3,5,2,4}
    ls.emplace_front(3); //{3,5,2,4}
    for (auto it : ls)
    {
        cout << it << " ";
    }
    // rest functions same as vector
    // begin,end,rbegin,rend,clear,isert,size,swap
   
      cout<<"\nThe maximum element is: "<<*max_element(ls.begin(),ls.end());
      cout<<"\nThe minmum element is: "<<*min_element(ls.begin(),ls.end());
  
    return 0;
}