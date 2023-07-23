
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class Solution
{
public:
    int R = 2, L = 34, B = 56;
    double areacalc(int choice, int arr[])
    {
        double area;
        if (choice == 1)
        {
            R = arr[0];
            area = M_PI * R * R;
            return area;
        }
        else if (choice == 2)
        {
            L = arr[0];
            B = arr[1];
            area = L * B;
            return area;
        }
    }
};

int main()
{
    Solution s;
    int choice, arr[2];
    cout << "choice: ";
    cin >> choice;
    for (int i = 0; i < 2; i++)
    {
        cout << "enter the value: ";
        cin >> arr[i];
    }
    double result = s.areacalc(choice, arr);
    cout << result << endl;
    return 0;
}