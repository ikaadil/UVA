#include <bits/stdc++.h>

using namespace std;
#define inf             0x3f3f3f3f
#define INF             2e18
#define eps             1e-9

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0)
#define fRead           freopen("input.txt","r",stdin)
#define fWrite          freopen("output.txt","w",stdout)

#define LL              long long
#define ULL             unsigned long long
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
char c[105];
char s[105][105];
bool v[105][105];
int n=0;
int cnt=0;
int dfs(int x,int y)
{
    v[x][y]=1;
    cnt++;
    for(int i=-1; i<=1; i++)
    {
        for(int j=-1; j<=1; j++)
        {
            if(v[x+i][y+j]==0&&s[i+x][j+y]=='W')
            {
//                cnt++;
                dfs(x+i,j+y);
            }
        }
    }
    return cnt;
}
int main()
{
//    fWrite;
    int t;
    int h=0;
    scanf("%d ",&t);
    while(t--)
    {

        memset(s,0, sizeof(s));
        n=0;
        if(h)
            printf("\n");
        h=1;
        while(gets(c))
        {
            if(c[0]=='\0')
                break;
            if(c[0]!='W'&&c[0]!='L')
            {
                int i,j;
                sscanf(c,"%d %d",&i,&j);
                memset(v,0,sizeof(v));
                cnt=0;
//                if(s[i-1][j-1]=='W')
//                    cnt++;
                int ans=dfs(i-1,j-1);
//                cout<<ans<<"\n";
//                n=0;
                printf("%d\n", ans);


            }
            else
            {
                sscanf(c,"%s",s[n]);
                n++;
            }

////            if(t)
//                puts("");
        }
    }
}
