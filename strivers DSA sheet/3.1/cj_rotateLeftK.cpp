#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void rotate(vector<int>&a,int k)
{
      int n=a.size();
      vector<int> cpy(a);
      for(int i=0;i<n;i++)
      {
          a[i]=cpy[(i+k) % n];
      }
      
}


int main() {
    //Write your code here
  int n;
  cin>>n;
  vector<int> arr;
  for(int i=0 ; i<n;i++)
  {
    int el;
      cin>>el;
      arr.push_back(el);
  }
  int k;
  cin>>k;



cout<<endl<<"rotatted"<<endl;

rotate(arr,k);

for (auto it:arr)
{
   cout<<it<< " ";

}
    return 0;
}