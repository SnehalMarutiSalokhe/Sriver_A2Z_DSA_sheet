#include <bits/stdc++.h>
using namespace std;
//STIRIVERS APROACH
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Write your code here
    vector<int> uni;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {

        if (a[i] <= b[j])
        {
            if (uni.size() == 0 || uni.back() != a[i])
            {
                uni.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (uni.size() == 0 || uni.back() != b[j])
            {
                uni.push_back(b[j]);
            }
            j++;
        }
    }
   
    while (j < n2)
    {
        if (uni.back() != b[j])
        {
            uni.push_back(b[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if (uni.size() == 0 || uni.back() != a[i])
        {
            uni.push_back(a[i]);
        }
        i++;
    }

    return uni;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 10};
    vector<int> arr2 = {1, 2, 3, 4, 4, 5, 5, 6, 7};
    cout << "Uninon: ";
    vector<int> uni = sortedArray(arr, arr2);
    for (int i = 0; i < uni.size(); i++)
    {
        cout << uni[i] << " ";
    }
   
    return 0;
}