#include<bits/stdc++.h>
using namespace std;
#define n 10000000
int ara[n+5];
long long int prime[n+5];
long long k=0;
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
            prime[k++]=i;
    }

}
int main()
{
    sieve();
    while(1)
    {
        int num,cnt=0;
        cin>>num;
        if(num==0)
            break;

        for(int i=0;prime[i]<=num;i++)
        {

         if(num%prime[i]==0)
            cnt++;
        }
       cout<<num<<" : "<<cnt<<endl;

    }
    return 0;
}
