#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main()
{
//     freopen("output.txt","w",stdout);
    int n,m;
    int cs=1;
    while(cin>>n>>m&&n+m!=0)
    {
        v.clear();
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
        int ans,mn=1234567;
        for(int i=1; i<=n; i++)
        {
            int sum=0;
            for(int j=1; j<=n; j++)
                sum+=ara[i][j];
            if(sum<mn)
            {
                mn=sum;
                ans=i;
            }

        }
        cout<<"Case #"<<cs++<<" : "<<v[ans]<<"\n";
    }
}
