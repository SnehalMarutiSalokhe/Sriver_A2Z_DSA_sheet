#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vs;
    int n;
    cout<<"Enter the vect: ";
    cin>>n;
    cout<<"Enter the vec: \n";
    for (int i = 0; i < n; i++)
    {
        int io;
        cin>>io;
        vs.push_back(io);


    }

    sort(vs.begin(),vs.end());
 cout<<endl<<"After sorting vec in Ascending order : \n";
    //int i=0;
    for(auto it:vs) 
    {
        cout<<it<<" ";
       
    }
    return 0;
}