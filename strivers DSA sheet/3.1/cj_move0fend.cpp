#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a)
{
    // Write your code here.
int cn=0;
    vector<int> sol;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            sol.push_back(a[i]);
        }else
        {
            cn++;
        }    
    }
    

    for (int i = 0; i < cn; i++)
    {
        sol.push_back(0);
    }   

   return sol;
    
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

    return 0;
}
