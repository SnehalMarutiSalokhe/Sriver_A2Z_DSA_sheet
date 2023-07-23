#include <bits/stdc++.h>
using namespace std;
int maxi_ones(int arr[], int n)
{

    int cn0 = 0;
    int k = 0, j = 0;
    int le[cn0];
    int big = le[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cn0++;
    }

    cout << " zero's = " << cn0 << endl;
    cn0++;

    for (int i = 0; i < cn0; i++)
    {
        le[i] = 0;
    }

    while (k < n)
    {
        while (arr[k] == 1)
        {
            le[j]++;
            k++;
        }
        if (le[j] > big)
            arr[k] = big;
        j++;
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == big)
        {
            arr[i] = 1;
        }
    }


    k=0;
     for (int i = 0; i < cn0; i++)
    {
        le[i] = 0;
    }
    j=0;
    while (k < n)
    {
        while (arr[k] == 1)
        {
            le[j]++;
            k++;
        }
        
        j++;
        k++;
    }
    big=0;
   
    for (int  i = 0; i < cn0; i++)
    {
         if (le[j] > big)
           big=  le[j];
    }
    return big;
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    // input array
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

   cout<<" max ones: "<< maxi_ones(arr, n);

    return 0;
}