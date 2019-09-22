#include<bits/stdc++.h>
using namespace std;
long long ans[ 30000+1];
int main()
{
    int dp[]= {50, 25, 10, 5, 1};
    ans[0]=1;
    for(int i=0; i<5; i++)
        for(int j=dp[i]; j<= 30000; j++)
            ans[j]+=ans[j-dp[i]];
    int t;
    while(cin>>t)
        {
        if(ans[t]!=1)
            cout<<"There are "<<ans[t]<<" ways to produce "<<t<<" cents change.\n";
            else
                cout<<"There is only 1 way to produce "<<t<<" cents change.\n";

        }
}
