#include<bits/stdc++.h>
using namespace std;
string s;
int dp[1001][1001];
int f(int i,int j)
{
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(i==j)
        return dp[i][j]=0;
        if(i>j)
            return 0;
    if(s[i]==s[j])
        return dp[i][j]=f(i+1,j-1);
    else
    {
        int ret=12345678;
        ret=min(ret,1+f(i+1,j));
        ret=min(ret,1+f(i,j-1));
//        ret=min(ret,1+f(i+1,j-1));
        return dp[i][j]=ret;
    }
}
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>s;
        memset(dp,-1,sizeof(dp));
        cout<<"Case "<<cs++<<": "<<f(0,s.size()-1)<<"\n";

    }
}
