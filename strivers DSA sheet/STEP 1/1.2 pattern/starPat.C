/*
to print this pattern
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < 2*n; i++)
    {
        if(i<n)
        {
            for (int j=n;j>i;j--)
            {
                 cout<<"*";
            }
             for (int s = 0; s < 2*i; s++)
             {
                cout<<" ";
             }
             for (int j=n;j>i;j--)
            {
                 cout<<"*";
            }
             cout<<endl;              
        }
        else if(i>=n)
        {
            int k;
            for( k=0;k<=i-n;k++)
            cout<<"*";
            for(int sp=0;sp<(2*(n-k));sp++)
            cout<<" ";
             for(int l=0;l<=i-n;l++)
            cout<<"*";
            cout<<endl;  
        }
    }
    

    return 0;
}