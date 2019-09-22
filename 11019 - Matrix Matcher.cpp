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
const ull b1=7003,b2=3747;
ull h[1001][1001];
int n,m,x,y;
char s[1001][1001];
char p[1001][1001];
ull hashme()
{
    for(int i=0; i<x; i++)
    {
        ull g=0;
        for(int j=0; j<y; j++)
            g=g*b1+p[i][j];
//        cout<<"...g"<<g<<endl;
        h[i][0]=g;
    }
    ull g=0;
//    cout<<"g1..."<<g<<endl;
    for(int i=0; i<x; i++)
    {
        g=g*b2+h[i][0];
    }
//    cout<<g<<endl;
    return g;
}
void hashme1()
{
    ull d=1;
    for(int i=1; i<y; i++)
        d=d*b1;
    for(int i=0; i<n; i++)
    {
        ull g=0;
        for(int j=0; j<y; j++)
            g=g*b1+s[i][j];
        for(int j=0; j<=m-y; j++)
        {
            h[i][j]=g;
            g=(g-s[i][j]*d)*b1+s[i][j+y];
        }
    }

    d=1;
    for(int i=1; i<x; i++)
        d=d*b2;
//    cout<<"...d "<<d<<endl;
    for(int j=0; j<=m-y; j++)
    {
        ull g=0;
        for(int i=0; i<x; i++)
            g=g*b2+h[i][j];
//        cout<<"...g "<<g<<endl;
        for(int i=0; i<=n-x; i++)
        {
            ull temp = g ;
            g = (g-h[i][j]*d)*b2 + h[i+x][j];
            h[i][j] = temp ;
        }

    }
}
int main()
{
    fWrite;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin>>s[i][j];
        }
        cin>>x>>y;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
                cin>>p[i][j];
        }
        ull ht=hashme();
        hashme1();
        int cnt=0;
//        cout<<ht<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                if(h[i][j]==ht)
                    cnt++;

        }
        cout<<cnt<<"\n";
    }

}
