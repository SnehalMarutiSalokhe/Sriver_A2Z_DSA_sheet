#include<bits/stdc++.h>
using namespace std;


vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
   int  cpy[n];
    for(int i=0;i<n;i++) cpy[i] =a[i];

    sort(cpy,cpy+n);
    vector<int> ans;
    ans.push_back(cpy[n-2]);
        ans.push_back(cpy[1]);

    return ans ;
}

int main(){
    
    return 0;
}