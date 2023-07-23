#include <bits/stdc++.h>
using namespace std;
void changeVal(int &num)
{
    num = num + 5;
    cout << num << endl;
    num = num + 5;
    cout << num << endl;
    num = num + 5;
    cout << num << endl;
}
int main()
{
    int num = 10;
    cout << num << endl;
    changeVal(num);
    cout << num << endl;
    return 0;
}