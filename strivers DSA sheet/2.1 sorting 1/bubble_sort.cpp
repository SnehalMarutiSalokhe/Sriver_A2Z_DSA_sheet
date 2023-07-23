#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n) {
    // Write Your Code Here
    int didSwap=0;
    for(int i=n-1;i>=0;i--)
    {
          didSwap=0;
        for(int j=0;j<i;j++)

        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                  didSwap=1;
            }
        }
        if(  didSwap==0) break;//optimizing the code
    }

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bubbleSort(arr,n);
    cout<<endl<<"Sorted array "<<endl;
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}