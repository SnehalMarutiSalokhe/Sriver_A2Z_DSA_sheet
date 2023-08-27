#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 2, target = 3;
    set<int> st;
    int sum = 0;
    int num = 1;
    int i=0;
    while(i<n)
    {
        int back = target - num;
        if (st.find(back) == st.end())
        {
            st.insert(num);
            sum += num;
            i++;
        }
        num++;
    }
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << sum;
    return 0;
}