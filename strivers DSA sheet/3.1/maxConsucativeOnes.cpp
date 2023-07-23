#include <bits/stdc++.h>
using namespace std;

int countZero(int arr[], int n)
{
    int cn = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cn = cn + 1;
        }
    }
    return cn;
}
int findMaxOnes(int arr[], int n, int z)
{
    int i = 0, j = 0;
    int cnZ[z+1];
    for (int i = 0; i < z+1; i++)
    {
        cnZ[i] = 0;
    }

    while (i < n)
    {
        while (arr[i] == 1)
        {
            i++;
            cnZ[j]++;
        }
        j++;
        i++;
    }

    return *max_element(cnZ, cnZ + j);
}
int main()
{
    int n;
    cout << "enter the array size: ";
    cin>>n;
    int arr[n];
    cout << "\n Enter the array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int z = countZero(arr, n);
    cout << "Zeros = " << z << endl;
    int max = findMaxOnes(arr, n, z);
    cout << " max  cocucutativ ones = " << max;

    return 0;
}
