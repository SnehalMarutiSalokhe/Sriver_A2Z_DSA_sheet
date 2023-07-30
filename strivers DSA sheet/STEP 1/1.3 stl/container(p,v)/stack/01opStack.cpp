#include<bits/stdc++.h>
using namespace std;

int main(){
    //we can acces only one element which is at top

    //there is no indexing
    stack<int> st;
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(3);
    st.emplace(8);//similar to push
   
    cout<<st.top();//this only prints the elemet at top
    cout<<"\nchek whether the stack is empty: "<<st.empty();
    
    st.pop();
    cout<<endl<<st.top();

    stack<int> st1;
    st1.swap(st);
    cout<<endl<<st.top();
    cout<<endl<<st1.top();
    return 0;
}