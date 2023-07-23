#include<bits/stdc++.h>
using namespace std;
//program to count the frequency of array element and print
int main(){
    int n;
    cout<<"Enter the size of arr: "; cin>>n;
    int arr[n];

    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

int sz=*max_element(arr,arr+n);
    int count[sz+1]={0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    cout<<" \ncount elements are: ";
     for (int i = 0; i < sz+1; i++)
    {
        cout<<endl<<i<<" "<<count[i];
    }
    
      for (int i = 0; i < n; i++)
    {
       arr[i]=count[arr[i]];
    }
cout<<endl<<"Elements are : "<<endl;
      for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    
    return 0;
}