#include<bits/stdc++.h>
using namespace std;
int adu(int n)
{
    int res=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;

            }
            res-=res/i;
        }
    }
    if(n>1)
        res-=res/n;
    return res;
}
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        if(n==0||n==1)
            printf("0\n");
        else
            printf("%d\n",adu(n));
    }
    return 0;
}
