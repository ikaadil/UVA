#include<bits/stdc++.h>
using namespace std;
#define N 10001;
vector<int>v[N];
bool vs[N][N];
int ara[N][N];
void bfs(int r)
{
    vs[r]=1;
    queue<int>q;
    q.push(r);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(Int i=0;i<v[u].size();i++)
        {
            int v1=v[u][i];
            if(ara[u][v1]<)
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r;
        cin>>n>>m>>r;
        while(m--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            v[u].push_back(v);
            ara[u][v]=w;
        }
        bfs(r);
    }
}
