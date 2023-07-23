#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v={4,3,2,1};
    for (vector<int> :: iterator i = v.begin(); i < v.end(); i++)
    {
        cout<<*i<<" ";
    }
    
    return 0;
}