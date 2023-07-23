#include<iostream>
using namespace std;

/*
to print this pattern
E 
E D 
E D C 
E D C B 
E D C B A 
*/
int main(){
    int n;
    cin>>n;
    char prt='A'+(n-1);
    
    for(int i=1;i<=n;i++)
    {
        prt='A'+n;
        for (int j = 1; j <= i; j++)
        {
            cout<<--prt<<" ";
        }
        cout<<"\n";
    }
    return 0;
}