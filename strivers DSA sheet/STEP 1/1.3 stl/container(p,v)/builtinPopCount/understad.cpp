#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1;
    //this is the function thant count the one in the binary of number;
    cout<<a<<" "<<__builtin_popcount(a);
    long long n=123456789098765;
    cout<<endl<<n<<" "<<__builtin_popcount(n);
    return 0;
}