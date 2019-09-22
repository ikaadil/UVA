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

int main()
{
    long long b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<f(b,p,m);
        cout<<"\n";
    }
}
