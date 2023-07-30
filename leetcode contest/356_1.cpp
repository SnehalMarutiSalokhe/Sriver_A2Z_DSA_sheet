#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count =0;
        for(int i=0;i<hours.size();i++)
        {
            if( hours[i]>= target)
                count+=1;
            
        }
        return count;
    }
};



int main(){
    Solution s;
    vector <int > hours={ 2,4,5,3,4,7,1,1,0,9};
    int target= 3;

  cout<<"empt :  "<<  s.numberOfEmployeesWhoMetTarget(hours,target);
    return 0;
}