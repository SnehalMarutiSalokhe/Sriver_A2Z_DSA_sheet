
    #include<bits/stdc++.h>
    using namespace std;
     long long maximumTripletValue(vector<int>& nums) {
        int f,s,l;
         long double sum =INT_MIN;
         if(nums.size()==3)
         {
            return (nums[0]-nums[1])*nums[2];
         }
       for (int  i = 0; i < nums.size()-2; i++)
       {
          for (int j = i+1; j < nums.size()-1; j++)
          {
            for (int k = j+1; k < nums.size(); k++)
            {
                long double curs=(nums[i]-nums[j])*nums[k];
                sum = max((curs),sum) ;
            }
            
            
          }
          
       }
        if(sum>0) return sum;
        else return 0;
       
    }

    int main(){
        vector <int > n ={1000000,1,1000000};
        cout<<maximumTripletValue(n);
        return 0;
    }