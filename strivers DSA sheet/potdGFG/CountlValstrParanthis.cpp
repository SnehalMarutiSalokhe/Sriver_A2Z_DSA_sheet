#include <bits/stdc++.h>
using namespace std;

/*
given a string consisting of opening and closing parenthesis,
find the length of the longest valid parenthesis substring.
*/
/*
intput : ((()
output: 2



intput: )()())
output: 4
*/

int main()
{
    string par;
    cout << "entere string: ";
   getline(cin,par);
    vector<char> cp;

    for (int i = 0; i < par.size(); i++)
    {
        cp.push_back(par[i]);
    }

    int cn = 0;
    for (int i = 0; i < cp.size(); i++)
    {
        for (int j = 0; j < cp.size(); j++)
        {
            if (cp[i] == '(' && cp[j] == ')')
            {
                cn++;
                cp.erase(cp.begin() + i - 1);
                cp.erase(cp.begin() + j - 1);
            }
            if (cp[i] == ')' && cp[j] == '(')
            {
                cn++;
                cp.erase(cp.begin() + i - 1);
                cp.erase(cp.begin() + j - 1);
            }
        }
    }
    // cout<<"string is: "<<endl;
    // for(auto it: cp) cout<<it<<" ";
    cout << "count of valid parenthesis is  : " << 2 * cn;

    return 0;
}