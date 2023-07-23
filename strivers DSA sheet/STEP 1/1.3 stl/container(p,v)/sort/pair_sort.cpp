#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //i.e if they are equal it atomatically chek the following conditions
    //there is no need to cheak eqality 
    if(p1.first<p2.first) return false;
    if(p1.first>p2.first) return true;
    
}
int main(){
    pair<int,int> p[]={{5,10},{1,4},{2,3},{1,2},{3,3},{4,5}};

    cout<<"\nPairs are as follow: \n";
    for(auto it:p)
    {
        cout<<"{ "<<it.first<<" , "<<it.second<<" }"<<endl;
    }

    sort(p,p+6);

    cout<<"\nPairs after default sorting \n";
    for(auto it:p)
    {
        cout<<"{ "<<it.first<<" , "<<it.second<<" }"<<endl;
    }

sort(p,p+6,comp);


    cout<<"\nPairs after sorting by second element\n";
    for(auto it:p)
    {
        cout<<"{ "<<it.first<<" , "<<it.second<<" }"<<endl;
    }


    return 0;
}