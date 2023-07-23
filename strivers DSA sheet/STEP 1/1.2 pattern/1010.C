#include<iostream>
using namespace std;

/*
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1
*/
int main(){
     int n;
    cin>>n;
    int print;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==1) print=1;
        else if(i%2!=1) print=0;
        for (int j = 1; j <=i; j++)
        {
           cout<<print;
           print=1-print;
        }
        cout<<endl;
    }
    

    return 0;
}