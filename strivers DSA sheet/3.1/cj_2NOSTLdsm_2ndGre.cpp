#include<bits/stdc++.h>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> ans;
    int small1=INT_MAX,samll2=INT_MAX;
     int big1=INT_MIN,big2=INT_MIN;     
    for(int i=0;i<n;i++)
    
        if(a[i]>big1) big1=a[i];
    

    for(int i=0;i<n;i++)
    
        if(a[i]>big2  && a[i]!=big1)  big2=a[i];
    
    ans.push_back(big2);


    for(int i=0;i<n;i++)
    
        if(a[i]<small1) small1=a[i];
    

    for(int i=0;i<n;i++)
    
        if(a[i]<samll2  && a[i]!=small1)  samll2=a[i];
    
    ans.push_back(samll2);


    return ans;
}


int main(){
    
    return 0;
}