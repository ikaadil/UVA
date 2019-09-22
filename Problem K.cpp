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
#define pii             pair<LL,string>
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
map<string,int>mp;
vector<int>v[201];
bool vs[201];
int f;
int p,q;
void dfs(int x)
{
//    cout<<p<<" "<<x<<endl;
    if(x==p)
    {

        f=1;
        return;
    }
    if(f)
        return ;
    vs[x]=1;
    for(int i=0; i<v[x].size(); i++)
    {
        if(vs[v[x][i]]==0)
            dfs(v[x][i]);
    }
}
void dfs1(int x)
{
//    cout<<q<<" "<<x<<endl;
    if(x==q)
    {

        f=1;
        return;
    }
    if(f)
        return ;
    vs[x]=1;
    for(int i=0; i<v[x].size(); i++)
    {
        if(vs[v[x][i]]==0)
            dfs1(v[x][i]);
    }
}
int main()
{

    string s1,s2,a,b,c;
    int n,m;
    cin>>n>>m;
    int cnt=1;
    for(int i=0; i<n; i++)
    {
        cin>>s1>>a>>b>>c>>s2;
        int x,y;
        if(mp[s2])
            y=mp[s2];
        else
        {
            y=cnt;
            mp[s2]=cnt;
            cnt++;
        }
        if(mp[s1])
            x=mp[s1];
        else
        {
            x=cnt;
            mp[s1]=cnt;
            cnt++;
        }
        v[y].pb(x);
//        cout<<s2<<" "<<y<<endl;
//        cout<<s1<<" "<<x<<endl;
//       cout<<s1<<a<<b<<c<<s2<<"---  "<<endl;
    }
    for(int i=0; i<m; i++)
    {
        cin>>s1>>a>>b>>c>>s2;
        int x,y;
        y=mp[s2];
        x=mp[s1];
//        cout<<x<<" "<<y<<endl;
        if(x==0||y==0)
            cout<<"Pants on Fire\n";
        else
        {
            p=x;
            q=y;
//            cout<<p<<" "<<q<<endl;
            f=0;
            memset(vs,0,sizeof(vs));
            dfs(q);
//            int h= dfs(q);
//            cout<<"  h  "<<h<<endl;

            if(f==1)
            {
                cout<<"Fact\n";
                continue;
            }
//            swap(p,q);
//            cout<<p<<" "<<q<<endl;
            f=0;
            memset(vs,0,sizeof(vs));
            dfs1(p);
//            int h= dfs(q);
//            cout<<"  h  "<<h<<endl;
            if(f==1)
            {
                cout<<"Alternative Fact\n";
                continue;
            }
            cout<<"Pants on Fire\n";
        }
    }
}
