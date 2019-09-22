#include<bits/stdc++.h>
using namespace std;
#define n 10000000
int ara[n];
int check[123];
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
int main()
{
    sieve();
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        char s[2005];
        cin>>s;
        printf("Case %d: ",i);
        int l=strlen(s),flag=0;
        for(int j=48; j<=122; j++)
        {
            for(int k=0; k<l; k++)
            {
                if(s[k]==j)
                    check[j]++;
            }

        }
         for(int j=48; j<=122; j++)
         {
             for(int k=0;prime[k]<=l;k++)
             {
                 if(check[j]==prime[k])
                 {
                     flag=1;
                    printf("%c",j);
                 }
             }
         }
         if(!(flag))
            printf("empty\n");
         if(flag)
         printf("\n");
         for(int j=48;j<=122;j++) check[j]=0;

    }
    return 0;
}
