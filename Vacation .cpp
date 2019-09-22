#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
string s1,s2;
int f(int n,int m)
{
    for(int i=0;i<=max(n,m);i++)
        dp[0][i]=dp[i][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int main()
{
    int cs=1;
    while(getline(cin,s1)&&s1[0]!='#')
    {
        getline(cin,s2);
        cout<<"Case #"<<cs++<<": you can visit at most "<<f(s1.size(),s2.size())<<" cities.\n";

    }

}


