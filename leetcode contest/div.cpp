#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T ;
	cin>>T;
	while(T--)
	{
	    int n;
	    long long num;
	    cin>>n;
	    cin>>num;
	   if(num%8 !=0){ if(n<=3)
	    {
	        int mod =num%8;
	        if(mod<=4) cout<<num-mod<<endl;
	        else cout<<(8-mod)+num<<endl;
	    }
	   }

       else
       {
         cout<<num<<endl;
       }
       
	}
	return 0;
}
