#include<bits/stdc++.h>
using namespace std;
#define n 10000000
int ara[n];

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
bool check(long long int num)
{
    long long sum=0,number=num;
    while(num!=0)
    {
        sum=sum*10;
        sum+=num%10;
        num/=10;
    }
    if(ara[sum]==0&&number!=sum)
        return 1;
    else
        return 0;
}
int main()
{
    sieve();
    long long num;
    while( scanf("%lld",&num)==1)
    {
        if(ara[num]==0&&check(num))
            printf("%lld is emirp.\n",num);
        else if(ara[num]==0)
            printf("%lld is prime.\n",num);
        else
            printf("%lld is not prime.\n",num);


    }
    return 0;
}
