#include<bits/stdc++.h>
using namespace std;
long long bigmod(long long n,long long p,long long m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        long long r=bigmod(n,p/2,m);
        return ((r%m)*(r%m))%m;
    }
    else
        return ((n%m)*(bigmod(n,p-1,m)%m))%m;
}
int f(int n)
{
    int cnt=1,t=10;
    long long a=1;
    while(a%n!=0)
    {
        a=a*t+1;
        cnt++;
        a=bigmod(a,1,n);

    }
    return cnt;
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<f(n)<<"\n";
    }
}

