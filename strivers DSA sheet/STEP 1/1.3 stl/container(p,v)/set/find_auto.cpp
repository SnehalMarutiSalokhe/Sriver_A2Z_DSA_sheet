#include<bits/stdc++.h>
using namespace std;

int main(){
    
    set<int> st;
    st.insert(1);
    st.insert(4);
    st.insert(6);
    st.insert(7);
    st.insert(3);
    st.insert(1);//this will not insert in 
    cout<<" elemets in st set are: ";

    for(auto it: st)
    {
        cout<<it<<" ";
    }

cout<<" find 4";
    auto t=st.find(4);

st.erase(1);//deletes and maintains the sorted order

    for(auto it: st)
    {
        cout<<it<<" ";
    }
    /*LOWER BOUND AND UPPER BOUND*/
    /*type complexity is in log*/
    return 0;
}