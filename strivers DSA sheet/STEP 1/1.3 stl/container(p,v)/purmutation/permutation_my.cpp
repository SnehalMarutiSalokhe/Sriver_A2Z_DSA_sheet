#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,7};
cout<<next_permutation(arr,arr+3);
cout<<endl;
for(int i=0;i<3;i++)
{
    cout<<arr[i];
}
next_permutation(arr,arr+3);
cout<<endl;
for(int i=0;i<3;i++)
{
    cout<<arr[i];
}
    return 0;
}