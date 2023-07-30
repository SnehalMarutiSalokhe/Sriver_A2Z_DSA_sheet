#include<bits/stdc++.h>

using namespace std;

#define mod 1000000007

class Solution {
public:
    void sub1(string &s){
        int pt=s.size()-1;
        while(s[pt]=='0'){pt--;}
        s[pt]--;
        for(int i=pt+1;i<s.size();i++){s[i]='9';}
        reverse(s.begin(),s.end());
        while(s.size()>1 && s.back()=='0'){s.pop_back();}
        reverse(s.begin(),s.end());
    }
    
    long long solve(string s){
        if(s=="0"){return 0;}
        int l=s.size();
        vector<long long> dp(20,0);
        for(int i=0;i<l;i++){
            int cdg=s[i]-'0';
            
            vector<long long> ndp(20,0);
            for(int p=0;p<20;p++){
                if(dp[p]==0){continue;}
                int pdg=p/2;
                int pfl=p%2;
                for(int q=0;q<=9;q++){
                    if(abs(pdg-q)!=1){continue;}
                    int nfl=pfl;
                    if(pfl==1){
                        if(q<cdg){nfl=0;}
                        if(q>cdg){nfl=-1;}
                    }
                    if(nfl==-1){continue;}
                    ndp[2*q+nfl]+=dp[p];
                    ndp[2*q+nfl]%=mod;
                }
            }
            
            if(i==0){
                for(int j=1;j<cdg;j++){
                    ndp[2*j]++;
                    ndp[2*j]%=mod;
                }
                ndp[2*cdg+1]++;
                ndp[2*cdg+1]%=mod;
            }
            else{
                for(int j=1;j<=9;j++){
                    ndp[2*j]++;
                    ndp[2*j]%=mod;
                }
            }
            dp=ndp;
        }
        
        long long res=0;
        for(auto &nx : dp){res+=nx;res%=mod;}
        return res;
    }
    
    int countSteppingNumbers(string low, string high) {
        long long res=solve(high);
        sub1(low);
        res+=(mod-solve(low));res%=mod;
        return (int)(res%mod);
    }
};

int main()
{
    return 0;
}