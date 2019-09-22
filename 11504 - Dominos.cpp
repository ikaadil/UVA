#include<bits/stdc++.h>
using namespace std;
int n,m,l;
vector<int>ve[100000+1];
bool vs[100001];
//vector<int>tp;
vector<int>h;
void dfs(int x)
{
    vs[x]=1;
    for(int i=0; i<ve[x].size(); i++)
    {
        if(vs[ve[x][i]]==0)
            dfs(ve[x][i]);
    }
//    tp.push_back(x);
//    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        memset(vs,0,sizeof(vs));
        cin>>n>>m>>l;
        int cnt=0;
        for(int i=0;i<=n;i++)
            ve[i].clear();
        while(m--)
        {
            int u,v;
            cin>>u>>v;
            ve[u].push_back(v);
//            ve[v].push_back(u);
        }
        h.clear();
        for(int i=0;i<l;i++)
        {
            int c;
            cin>>c;
            h.push_back(c);
        }
        for(int i=0; i<l; i++)
        {
            if(vs[h[i]]==0)
            {

                dfs(h[i]);
            }
        }
        for(int i=1;i<=n;i++)
            if(vs[i])
            cnt++;
//        memset(vs,0,sizeof(vs));
//        for(int i=tp.size()-1;i>=0;i--)
//        {
//            if(vs[tp[i]]==0)
//            {
//                cnt++;
//                dfs(tp[i]);
//            }
//        }
//        tp.clear();
        cout<<cnt<<"\n";
    }
}
