#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> arr[] = {{1, 2}, {1, 2}, {1, 4}, {2, 5}};
    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << "-> {" << arr[i].first << "," << arr[i].second << "}" << endl;
    }

    return 0;
}