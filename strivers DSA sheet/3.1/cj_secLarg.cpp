#include<vector>
// #include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;


#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int n= arr.size();
	int mid=n/2;
	int xor1=0;
	if(arr[mid]!=arr[mid-1] &&arr[mid]!=arr[mid+1])
	 {
         cout<<xor1<<" mid "<<endl;
		 return arr[mid];
	 }
	else  if(arr[mid]!=arr[mid-1] && arr[mid]==arr[mid+1])
	 {
		 for(int i=0;i<mid;i++)
		 {
			 xor1=xor1^arr[i];
           
		 }
            cout<<xor1<<" left "<<endl;
	 }

	 else if(arr[mid]==arr[mid-1] && arr[mid]!=arr[mid+1]  )
	 {
		 for(int i=mid+1;i<n;i++)
		 {
			  xor1=xor1^arr[i];
		 }
                     cout<<xor1<<" right "<<endl;

	 }
                 cout<<xor1<<" return "<<endl;

	 return xor1;
}
int main(){
    vector<int> v={1,1,2,2,3};
    cout<<getSingleElement(v);
    return 0;
}