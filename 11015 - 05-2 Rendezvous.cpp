#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        v.push_back("gh");
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        int ara[n+1][n+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==j)
                    ara[i][j]=0;

                else
                    ara[i][j]=12345678;
            }
        }
        while(m--)
        {
            int u,v,cost;
            cin>>u>>v>>cost;
            ara[u][v]=cost;
            ara[v][u]=cost;
        }
        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                    ara[i][j]=min(ara[i][k]+ara[k][j],ara[i][j]);
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cout<<ara[i][j]<<" ";
            cout<<endl;
        }
    }
}
