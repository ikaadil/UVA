#include <bits/stdc++.h>

using namespace std;
#define inf             0x3f3f3f3f
#define INF             2e18
#define eps             1e-9

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0)
#define fRead           freopen("input.txt","r",stdin)
#define fWrite          freopen("output.txt","w",stdout)

#define LL              long long
#define ull            unsigned long long
#define PI              acos(-1.0)
#define pb              push_back
#define mk              make_pair
#define pii             pair<int,int>
#define pLL             pair<LL,LL>
#define ff              first
#define ss              second
#define all(a)          a.begin(),a.end()
#define SQR(a)          ((a)*(a))
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(min(a,b),min(c,d))
#define max4(a,b,c,d)   max(max(a,b),max(c,d))
#define max5(a,b,c,d,e) max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e) min(min3(a,b,c),min(d,e))
#define vi              vector <int>
#define vL              vector <LL>
#define LB(a,x)         (lower_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which does not compare less than val.
#define UB(a,x)         (upper_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which compares greater than val.
#define prec(n)         fixed << setprecision(n)

#define MEM(a,x)        memset(a,x,sizeof(a))
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define Unique(a)       sort(all(a)),a.erase(unique(all(a)),a.end())

#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define IT(it,x)	    for(it=x.begin();it!=x.end();it++)
int dx[]={1 , 1 , -1 , -1 ,  2 , 2 ,-2 ,-2};
int dy[]={2 ,-2 ,  2 , -2 , -1 , 1 , 1 ,-1};
int vs[10][10];
int cost[10][10];
int dfs(int a,int b,int x,int y)
{
    vs[a][b]=1;
    cost[a][b]=0;
    queue<pii>q;
    q.push(mk(a,b));
    while(!q.empty())
    {
        int a1,b1;
        a1=q.front().ff;
        b1=q.front().ss;
        if(x==a1 && y==b1)
        {
            return cost[x][y];
        }
        q.pop();
        for(int i=0;i<8;i++)
        {
            int a2,b2;
            a2=a1+dx[i];
            b2=b1+dy[i];
            if(a2>0 && a2<=8 && b2>0 && b2<=8 && vs[a2][b2]==0)
            {
                cost[a2][b2]=cost[a1][b1]+1;
                vs[a2][b2]==1;
                q.push(mk(a2,b2));

            }
        }
    }
}
int main()
{
//    fWrite;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        int a=s1[0]-96;
        int b=s1[1]-'0';
        int x=s2[0]-96;
        int y=s2[1]-'0';
        MEM(cost,0);
        MEM(vs,0);
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<dfs(a,b,x,y)<<" knight moves.\n";

    }
}
