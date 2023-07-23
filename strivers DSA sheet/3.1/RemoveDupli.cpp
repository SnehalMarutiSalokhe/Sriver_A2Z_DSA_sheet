#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n)
{
    // Write your code here.

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

  //{  This is for removing deplicates
    int i=0;
    for(auto it:st)
    {
            arr[i++] = it;
            
    }

    while (n>st.size())
    {
        arr.pop_back();
        n--;
    }
    
    //}
    // n=st.size();
    return n;
}

int main()
{
    vector<int> arr={1,1,2,2,2,3,4, 5 };

    for (int i = 0; i < arr.size(); i++)
    {
      cout<<" "<<arr[i]<<" ";
    }
   cout<<endl<< removeDuplicates(arr,arr.size())<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
      cout<<" "<<arr[i]<<" ";
    }
    return 0;
}