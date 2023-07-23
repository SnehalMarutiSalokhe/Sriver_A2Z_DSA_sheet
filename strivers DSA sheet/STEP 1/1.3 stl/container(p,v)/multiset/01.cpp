#include <bits/stdc++.h>
using namespace std;

int main()
{
    // we can store all the accurence;

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(5);
    ms.insert(1);
    cout << "elemets without errase" << endl;
    for (auto it : ms)
    {
        cout << it << endl;
    }
    ms.erase(1);
    cout << "elemets after errase (1)" << endl;
    for (auto it : ms)
    {
        cout << it << endl;
    }
    ms.insert(3);
    ms.insert(3);
    ms.insert(6);
    ms.insert(9);
    ms.insert(3);
    int count = ms.count(3);
    cout << "count of 3 is : " << count;
    /*If we do not want delete the all multiple elemets
    then we can use find() and erase;
    */
   cout<<"\nnew multiset\n";
for (auto it : ms)
    {
        cout << it << endl;
    }
    cout<<*ms.find(4)<<endl;
   ms.erase(ms.find(4));
   cout << "elemets after errase () at first position " << endl;
    for (auto it : ms)
    {
        cout << it << endl;
    }
    return 0;
}