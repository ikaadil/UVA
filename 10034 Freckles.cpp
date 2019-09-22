#include<bits/stdc++.h>
using namespace std;
#define MAX 101
#define db double
double x[101],y[101];

struct edge
{
    int u, v;
    double  w;
    bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};
int pr[MAX];
vector<edge> e;
int find(int r)
{
    return (pr[r] == r) ? r : find(pr[r]);
}
double mst(int n)
{
    sort(e.begin(), e.end());
    for (int i = 0; i <= n; i++)
        pr[i] = i;

    int count = 0;
    double s = 0;
    for (int i = 0; i < (int)e.size(); i++)
    {
        int u = find(e[i].u);
        int v = find(e[i].v);
        if (u != v)
        {
            pr[u] = v;
            count++;
            s += e[i].w;
            if (count == n - 1)
                break;
        }
    }
    return s;
}

db dis(db x1,db y1,db x2,db y2)
{
    db x=x1-x2;
    db y=y1-y2;
    return sqrt(x*x+y*y);
}
int main()
{
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        e.clear();
        double ans=0;
        for(int i=0; i<n; i++)
            cin>>x[i]>>y[i];
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                edge p;
                p.u=i;
                p.v=j;
                p.w=dis(x[i],y[i],x[j],y[j]);
                e.push_back(p);
            }
        }
        printf("%.2f\n",mst(n));
        if(t!=0)
            cout<<"\n";


    }
}
