#include<bits/stdc++.h>
using namespace std;
int main()
{
    //permutation alway statrs from that sring to the possible pemutation which is gratest
    //it does not find the string smaller than given
    //so it will be benifishary ot sort the string fist the use pemutation;

    string s="123";

    cout<<"\npermutations are as follow\n";
    do
    {
        cout<<s<<"  ";
    } while (next_permutation(s.begin(),s.end()));

string sr="4231";
  cout<<"\npermutations are as follow\n";
do
{
    cout<<sr<<" ";
    
} while (next_permutation(sr.begin(),sr.end()));
sort(sr.begin(),sr.end());//after thsi it gives all the pemutations
 cout<<"\npermutations are as follow after sorting\n";
do
{
    cout<<sr<<" ";
    
} while (next_permutation(sr.begin(),sr.end()));

   
    
    return 0;
}