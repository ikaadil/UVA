#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie();
int vs[201];
int main()
{
    FastRead;
    int n;

    while(cin>>n&&n!=0)
    {
        int l;
        cin>>l;
        vector<int>ara[n];
        for(int i=0; i<l; i++)
        {
            int u,v;
            cin>>u>>v;
            ara[u].push_back(v);
            ara[v].push_back(u);

        }
        queue<int>q;
        q.push(0);
        memset(vs,-1,sizeof(vs));
        bool flag=0;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(int i=0; i<ara[u].size(); i++)
            {
                int v=ara[u][i];
                if(vs[v]==-1)
                {
                    if(vs[u]==0)
                        vs[v]=1;
                    else
                        vs[v]=0;
                    q.push(v);
                }
                else
                {
                    if(vs[v]==vs[u])
                    {
                        flag=1;
                        break;

                    }
                }



            }
            if(flag)
                break;
        }
        if(flag)
            cout<<"NOT BICOLORABLE.\n";
        else cout<<"BICOLORABLE.\n";



    }
}
