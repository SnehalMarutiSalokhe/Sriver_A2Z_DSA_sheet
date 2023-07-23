#include<bits/stdc++.h>
using namespace std;

//====================================
//by using stl set
//=====================================
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    set < int > st;
    for(int i=0;i<a.size();i++)
    {
        st.insert(a[i]);
    }
     for(int i=0;i<b.size();i++)
    {
        st.insert(b[i]);
    }
   

   vector<int> uni;
   for(auto it: st)
   {
         uni.push_back(it);
   }
   return uni;
}

int main(){
    

    vector<int> arr = {1, 2, 3, 4, 5, 6, 10};
    vector<int> arr2 = {1, 2, 3, 4,4,5, 5, 6, 7};
    cout<<"Uninon: ";
    vector<int> uni = sortedArray(arr, arr2);
   for (int i = 0; i < uni.size(); i++)
   {
     cout<<uni[i]<<" " ;
   }
   
   
   
    return 0;
}