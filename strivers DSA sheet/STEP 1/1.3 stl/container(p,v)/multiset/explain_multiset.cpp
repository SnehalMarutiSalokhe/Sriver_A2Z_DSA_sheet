#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> mulS;
    mulS.insert(9);
    mulS.insert(3);
    mulS.insert(3);
    mulS.insert(3);
    mulS.insert(9);
    mulS.insert(1);
    mulS.insert(2);

    for (auto it : mulS)
    {
        cout << it << " ";
    }
    cout << endl;

    mulS.erase(mulS.find(3));
    cout << endl
         << " after delttion at spefic  position\n to delte 3's only one accurence\n";
    for (auto it : mulS)
    {
        cout << it << " ";
    }
    cout << endl;

  
multiset<int> mulS2;
    mulS2.insert(1);
    mulS2.insert(1);
    mulS2.insert(5);
    mulS2.insert(5);
    mulS2.insert(9);
    mulS2.insert(9);
    mulS2.insert(9);
    mulS2.insert(9);
    mulS2.insert(1);
    mulS2.insert(2);
  //  mulS2.push_back(89);//->> this is not vlid as it is set of asscending order so 
  //89 can't be pushed at the last ethee we can't use all push_back() and pop_back functions in the 
  //in the multiset as we used in the vector ,queue ,and stack and list
    cout<<"________________________________";
    cout<<"\nthe new multiset\n";
 for (auto it : mulS2)
    {
        cout << it << " ";
    }
    cout << endl;

      cout<<"\n to delte all the accurences of 9\n";
      mulS2.erase(9);
      cout<<"the new multiset";
      cout<<"\n after delte all the accurences of 9\n";
 for (auto it : mulS2)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}