#include<bits/stdc++.h>
using namespace std;
/*printing a name n times by recursion*/
void printntimes(int n)
{
    if(n!=0)
    {
        cout<<"snehal\n";
        printntimes(n-1);
    }

}
int main(){
    int n;
    cin>>n;
    printntimes(n);

    return 0;
}