#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 3, 2};

    next_permutation(vec.begin(), vec.end());

    cout << vec[0] << " " << vec[1] << " " << vec[2]<<endl;

    next_permutation(vec.begin(), vec.end()); // just it will juble and make a pumutation

    cout << "\npermutations are as follow\n";
    do
    {
        cout << vec[0] << " " << vec[1] << " " << vec[2]<<endl;

    } while (next_permutation(vec.begin(), vec.end()));

    sort(vec.begin(), vec.end()); // after this it gives all the pemutations
    cout << "\npermutations are as follow after sorting\n";
    do
    {
        cout << vec[0] << " " << vec[1] << " " << vec[2]<<endl;

    } while (next_permutation(vec.begin(), vec.end()));

    return 0;
}