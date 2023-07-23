#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,7,8,89};
    for (int i = 0; i < 4; i++)
    {
        cout<<" "<<arr[i]<<"  : arr["<<i<<"]\n";
    }
    cout<<endl<<"After sorting arr in ascending order : \n";

    sort(arr,arr+4);
    for (int i = 0; i < 4; i++)
    {
        cout<<" "<<arr[i]<<"  : arr["<<i<<"]\n";
    }
    return 0;
}