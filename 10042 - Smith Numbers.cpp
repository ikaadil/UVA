#include<bits/stdc++.h>
using namespace std;
#define n 10000000
int ara[n];
long long int prime[n];
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
int sum(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int num,ans,sum2=0,ds=0;
        cin>>ans;
        int sum1=-1;
        while(sum1!=sum2)
        {
            num=++ans;

             if(num<k&&ara[num]==0)
                continue;
            sum2=sum(num);
            sum1=0;
            for(int i=0;i<k&&prime[i]*prime[i]<=num;i++)
            {
                if(num%prime[i]==0)
                 ds=sum(prime[i]);
                while(num%prime[i]==0)
                {
                    num/=prime[i];
                    sum1+=ds;
                }
            }
//            if(num==ans)
//                continue;
            if(num!=1)
                sum1+=sum(num);
        }
        cout<<ans<<endl;
    }
    return 0;
}
