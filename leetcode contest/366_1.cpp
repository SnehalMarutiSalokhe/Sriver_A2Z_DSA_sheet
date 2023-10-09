#include<bits/stdc++.h>
using namespace std;
int differenceOfSums(int n, int m) {
    long long num2 =0,num1=0;
        for (int i = 1; i <=n; i++)
        {
           if(i%m==0) num2+=i;
           else num1+=i;
        }
        return num1-num2;
        
    }
int main(){
    cout<<differenceOfSums(10,3);
    return 0;
}