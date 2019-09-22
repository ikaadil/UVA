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
vector<string>v,ans;
const int n=1000010;
ull p[n];
ull h[n];
char s[n];
int base=7003;
ull seg(int x,int y)
{
    return h[y]-h[x-1]*p[y-x+1];
}
int main()
{
    int t;
    p[0]=1;
    for(int i=1; i<n; i++)
        p[i]=p[i-1]*base;
    while(cin>>t&&t!=0)
    {
        string s1;
        v.clear();
        ans.clear();
        while(t--)
        {
            cin>>s1;
            v.pb(s1);
        }
        h[0]=0;
        scanf("%s",s+1);
        int a=strlen(s+1);
        for(int i=1; i<=a; i++)
            h[i]=h[i-1]*base+s[i];
        int cnt=0,mx=0;
        for(int i=0; i<v.size(); i++)
        {
            ull match=0;
            for(int j=0; j<v[i].size(); j++)
                match=match*base+v[i][j];
//            cout<<"m "<<v[i]<<" "<<match<<"\n";
            int b=v[i].size();
            cnt=0;
            for(int j=b; j<=a; j++)
            {
//                cout<<"seg "<<seg(j-b+1,j)<<"\n";
                if(seg(j-b+1,j)==match)
                {
//                    for(int k=j-b+1; k<=j; k++)
//                        cout<<s[k];
//                    cout<<"\n";
//                    cout<<"seg "<<seg(j-b+1,j)<<"\n";
//                    cout<<" mat "<<match<<"\n";
                    cnt++;
                }
            }
            if(cnt>mx)
            {
                mx=cnt;
                ans.clear();
                ans.pb(v[i]);
            }
            else if(cnt==mx)
                ans.pb(v[i]);
        }
        cout<<mx<<"\n";
        for(int i=0; i<ans.size(); i++)
        {

            cout<<ans[i];
//            if(i!=ans.size()-1)
            cout<<"\n";
        }
//        cout<<"\n";




    }
}
