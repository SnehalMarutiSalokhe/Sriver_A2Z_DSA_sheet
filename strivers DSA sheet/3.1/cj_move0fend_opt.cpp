#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> & a)
{
    // Write your code here.

    int j=-1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0)
        {
           
            j=i;
             break;
        }
    }
    
    if(j ==( -1)) return a;


    for (int i = j+1; i < n ; i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
    
    return a;
    
}

int main()
{

    // int k;
    // cin >> k;

    vector<int> a = {1,2, 3, 0 , 0, 4};

    for (int i = 0; i < a.size(); i++)
    {
        cout << " " << a[i];
    }
   vector<int> sol= moveZeros(a.size(), a);
    cout << "\n";
    cout << endl;
    for (int i = 0; i < sol.size(); i++)
    {
        cout << " " << sol[i];
    }
  cout << "\n";

for (int i = 0; i < a.size(); i++)
    {
        cout << " " << a[i];
    }
    return 0;
}
