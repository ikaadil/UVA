#include<bits/stdc++.h>
using namespace std;
long long divisors(long long int n)
{
    long long cnt=0,m=sqrt(n);
    for(int i=1; i<=m; i++)
    {
        if(n%i==0)
            cnt++;
    }
    if(m==sqrt(n))
        cnt=cnt*2-1;
    else
        cnt=cnt*2;
    return cnt;
}
int main()
{
    long long l,h,store,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>h;

           long long maxi=0,l1=l;
        for(l; l<=h; l++)
        {
            long long x=divisors(l);
            if(x>maxi)
            {
                maxi=x;
                store=l;
            }

        }

        cout<<"Between "<<l1<<" "<<"and "<<h<<", "<<store<<" has a maximum of "<<maxi<<" divisors."<<endl;
    }
    return 0;
}
