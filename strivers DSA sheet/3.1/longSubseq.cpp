#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    map<long long,int> preSumMap;
    long long sum =0;
    int maxlen=0;
    for(int i=0;i<a.size();i++)
    {
       sum+=a[i];
       if(sum==k)
       {
        maxlen=max(maxlen,i);
       }

       long long rev=sum-k;
       if(preSumMap.find(preSumMap[rev])!=preSumMap.end())
       {
           int len=i-preSumMap[rev];
            maxlen=max(maxlen,len);
       }

              if(preSumMap.find(sum)==preSumMap.end())
              preSumMap[sum];

    }
    return maxlen;
}