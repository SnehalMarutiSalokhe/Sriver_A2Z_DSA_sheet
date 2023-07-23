#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else if (st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')) {
                return false;
            } else {
                st.pop();
            }
        }
        return st.empty();
    
}

int main()
{

    string s;
    cin >> s;
    cout << "\nResult is: ";
    cout << endl;
    int val = isValid(s);
    if (val == 0)
        cout << "\nfalse\n";
    if (val == 1)
        cout << "\ntrue\n";

    return 0;
}