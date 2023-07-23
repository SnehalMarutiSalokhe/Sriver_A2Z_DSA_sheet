#include<bits/stdc++.h>
using namespace std;
//other way to acces the elemts of vector is iterator
int main(){
   
   vector<int> v={1,2,3,4};
   vector<int> ::iterator elem =v.begin();
    cout<<*elem<<" ";
    return 0;
}