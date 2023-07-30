#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int count =0;
    int length = 0;
    int x;
    unordered_set<int> st;

    for(int i=0;i<a.size();i++)
    {
        st.insert(a[i]);
    }


    for(auto it: st)
    {
        if(st.find(it-1)==st.end())
        {
            x =it;
            while(st.find(x+1)!=st.end())
            {
                x=x+1;
                count ++;

            }
        }
        length = max(length,count);
    }
   
    return length;
}
int main(){
    
    return 0;
}