#include<bits/stdc++.h>
using namespace std;

int main(){
    
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(9);
    dq.emplace_back(7);
    for(auto it: dq)
    {
        cout<<" "<<it;
    }
    return 0;
}