#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 6, 7, 8, 8};
    v.emplace_back(9);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        
        cout<<*it<<" ";
    }

    //another way to print the vector
    cout<<"\nanother way to print the vector\n";

    for(auto it:v)
    {
        
        cout<<it<<" ";
    }
    
    return 0;
}