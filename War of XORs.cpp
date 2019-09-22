#include<bits/stdc++.h>
using namespace std;
const int N=1000001;
int mp[1000001];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c1=0,c2=0;
        long long ans=0;
        memset(mp,0,sizeof(mp));
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            if(a%2==0)c1++;
            else c2++;
        }
        for(int i=1;i<=N;i++)
        {
            if(i%2==0)
            {
                ans+=(long long)(c1-mp[i])*mp[i];
            }
            else
                ans+=(long long)(c2-mp[i])*mp[i];
        }
        ans=ans/2;
        ans-=mp[1]*mp[3];
        cout<<ans<<"\n";
    }
}
