#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& a, int b) {
        int v = 0;
      for (int x : a) if (x >= b) v++;
      return v;
    }
};


int main(){
    Solution s;
    vector <int > hours={ 2,4,5,3,4,7,1,1,0,9};
    int target= 3;

  cout<<"empt :  "<<  s.numberOfEmployeesWhoMetTarget(hours,target);
    return 0;
}