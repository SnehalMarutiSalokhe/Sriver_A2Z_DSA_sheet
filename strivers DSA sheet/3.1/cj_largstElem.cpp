#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    // int max = *max_element(arr.begin(),arr.end());
    // return max;

    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    return max;
}


int main(){
    
    return 0;
}