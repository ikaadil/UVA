#include<bits/stdc++.h>
using namespace std;
#define n 1000002
int ara[n+1];
int store[n+1];

void sieve()
{
    long long int i,j;
    ara[0]=1;
    ara[1]=1;
    for(i=4; i<=n; i+=2)
        ara[i]=1;
    for(i=3; i*i<=n; i++)
    {
        if(ara[i]==0)
        {
            for(j=i*i; j<=n; j+=2*i)
                ara[j]=1;
        }
    }
}
bool check(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    if(ara[sum]==0)
        return 1;
    else
        return 0;
}
int main()
{
    sieve();
    int cnt=0;
    for(int i=0; i<=1000002; i++)
    {
        if(ara[i]==0&&check(i))
            cnt++;
        store[i]=cnt;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,u;
        scanf("%d%d",&l,&u);
        printf("%d\n",store[u]-store[l-1]);
    }
    return 0;
}
