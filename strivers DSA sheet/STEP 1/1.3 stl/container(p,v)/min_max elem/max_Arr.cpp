#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {4,2,5,9,1};
    cout<<"The elements in the array are: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The maximum element is: "<<*max_element(arr,arr+5);
    return 0;
}