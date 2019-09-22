#include<bits/stdc++.h>
using namespace std;
int ara[10001];
int dp[101][10001];
int flag=0;
int n,k;
void f(int sum,int pos)
{
    if(flag==1)
        return ;
    sum=(sum%k+k)%k;
    if(dp[sum][pos]!=-1)return;
    if(n<pos)
    {
        if(sum==0)
        {
            flag=1;
//            cout<<"njkf";
        }
        return ;
    }

    f(sum+ara[pos],pos+1);

    f(sum-ara[pos],pos+1);
    dp[sum][pos]=flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
//        int n,k;
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));

        for(int i=1; i<=n; i++)
        {
            cin>>ara[i];
        }
        flag=0;
        f(ara[1],2);
        if(flag==1)
            cout<<"Divisible\n";
        else
            cout<<"Not divisible\n";

    }
}
