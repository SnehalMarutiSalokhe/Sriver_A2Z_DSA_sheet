/*
to print this pattern
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/


#include<bits/stdc++.h>

using namespace std;

int main(){
     int n;
    cin>>n;
    int print=n;
    for (int i = 1; i < 2*n; i++)
    {
         print=n+1;
        for (int j = 1; j <2*n; j++)
        {             
            if (j<i+1)
            {
                print--;
            }
            if(j>(2*n-i))
            print++;
           cout<<print<<" ";
            
        }
        cout<<endl;
    }
    string name;
cin>>name;
    return 0;
}