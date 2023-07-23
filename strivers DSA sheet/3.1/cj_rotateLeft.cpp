#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n)
{
    // Write your code here.
        vector<int> sol;
        for (int i = 0; i < n-1; i++)
        {
            sol.push_back(arr[i+1]);
        }
        sol.push_back(arr[0]);

        return sol;
   
}

//not using extra cotainer
vector<int> rotateArray_With_NO_Extra_Arrya(vector<int> &arr, int n)
{
    // Write your code here.
        int temp =arr[0];
        for (int i = 0; i < n-1; i++)
        {
            arr[i]=arr[i+1];
        }
       arr[n-1] =temp;
        return arr;
   
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    cout<<"something: ";
    vector<int> rev = rotateArray(arr, arr.size());
   for (int i = 0; i < rev.size(); i++)
   {
     cout<<rev[i]<<" " ;
   }
     cout<<"\nrotateArray_With_NO_Extra_Arrya: \n";
   rev = rotateArray_With_NO_Extra_Arrya(arr, arr.size());
   for (int i = 0; i < rev.size(); i++)
   {
     cout<<rev[i]<<" " ;
   }
   
   
    return 0;
}