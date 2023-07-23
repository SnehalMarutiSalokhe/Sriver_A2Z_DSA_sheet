/*
 Print this damaru pattern
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
#include<iostream>
using namespace std;

int main(){
     int n;
    cin>>n;
    for (int i = 1; i < 2*n; i++)
    { 
        if(i<=n)
        {
            int k;
            for( k=1;k<i+1;k++)
                cout<<"*";
            for(int sp=0;sp<(2*(n-k+1));sp++)
                 cout<<" ";
             for(int l=1;l<i+1;l++)
                 cout<<"*";
            cout<<endl;  
        }
         else if(i>n)
         {            
            for (int j = 1; j <= (n-(i-n)); j++)
              cout<<"*";  

             for (int s = 0; s < 2*(i-n); s++)
                cout<<" ";
        
             for (int j = 1; j <= (n-(i-n)); j++)           
                cout<<"*";

             cout<<endl;      
         }
    }
    
    return 0;
}