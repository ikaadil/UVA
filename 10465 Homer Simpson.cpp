#include<bits/stdc++.h>
using namespace std;
int ans[10009];
int m,n,t;

int main()
{
//    freopen("output.txt","w",stdout);
    while(cin>>m>>n>>t)
    {
//        memset(ans,-1,sizeof(ans));
        ans[0]=0;
        for(int i=1; i<=t; i++)
        {
            ans[i]=-1;
            if(i>=m&&ans[i-m]>=0)
                ans[i]=ans[i-m]+1;
            if(i>=n&&ans[i-n]>=0)
                ans[i]=max(ans[i],ans[i-n]+1);


        }
        if(ans[t]!=-1)
            cout<<ans[t]<<"\n";
        else
        {
            int i=1;
            while(ans[t-i]==-1)
                i++;
            cout<<ans[t-i]<<" "<<i<<"\n";
        }
    }
}
