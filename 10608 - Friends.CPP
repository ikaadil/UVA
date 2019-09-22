#include<bits/stdc++.h>
using namespace std;
vector<int>v[30001];
int cnt=0;
bool vs[30001];
void dfs(int a)
{
    vs[a]=1;
    cnt++;
    for(int i=0;i<v[a].size();i++)
    {
        if(vs[v[a][i]]==0)
            dfs(v[a][i]);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,ans=0;
        cin>>n>>m;
        for(int i=0;i<=n;i++)
        {
            v[i].clear();
            vs[i]=0;
        }
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for(int i=1;i<=n;i++)
        {
            if(vs[i]==0)
            {
                cnt=0;
                dfs(i);
                ans=max(ans,cnt);
            }
        }
        cout<<ans<<"\n";
    }
}
