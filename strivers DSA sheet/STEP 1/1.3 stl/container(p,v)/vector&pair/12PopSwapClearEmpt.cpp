#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(4, 89);
    cout << "size =" << v.size() << endl;
    v.pop_back(); // pops the elemets at end
    for (auto it : v)
    {
        cout << it << " ";
    }

    vector<int> v1(3, 30);
    vector<int> v2(4, 40);

    cout << endl
         << "v1 vector is\n";
    for (auto it : v1)
    {
        cout << it << " ";
    }

    cout << endl
         << "v2 vector is\n";

    for (auto it : v2)
    {
        cout << it << " ";
    }

    v1.swap(v2);
    cout << endl
         << " after swap v1 vector is\n";
    for (auto it : v1)
    {
        cout << it << " ";
    }

    cout << endl
         << "after swap v2 vector is\n";

    for (auto it : v2)
    {
        cout << it << " ";
    }

    v.clear(); // clear entire vector;
    cout << endl
         << "after clear() v vector is\n\n\n";

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl
         << "cheks whether v is empry or not " << v.empty();
    return 0;
}