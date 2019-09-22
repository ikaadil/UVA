#include<bits/stdc++.h>
using namespace std;
#define n 1000001
int ara[n+5];
vector<long long >cp;
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
    for(i=0; i<=n; i++)
    {
        if(ara[i]==0)
            {
                for(j=i*i;j<1000000000001;j*=i)
                    cp.push_back(j);
            }
    }
    sort(cp.begin(),cp.end());
}
int main()
{
    sieve();

    int t;
    cin>>t;
    while(t--)
    {
        long long l,u,i=0,cnt=0;
        cin>>l>>u;
        while(cp[i]<l)
            i++;
        for(;cp[i]<=u&&i<cp.size();i++)
            cnt++;
        cout<<cnt<<endl;
    }
     return 0;
}
