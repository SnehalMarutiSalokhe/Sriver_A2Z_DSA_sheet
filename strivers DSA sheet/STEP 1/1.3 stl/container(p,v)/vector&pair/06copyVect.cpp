#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v1(5,10);
    
    vector <int> v2(v1);//this copies v1 vector into v2
    cout<<"\nElemets of v1 are"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nElemets of v2 are"<<endl;
     for (int i = 0; i < 5; i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}