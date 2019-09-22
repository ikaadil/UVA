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
double p[21];
vector<pair<int,double> >v;
int main()
{
//    fWrite;
    int n,r;
//    cout<<(1<<2);
    int cs=1;
    while(cin>>n>>r&&n+r!=0)
    {
        v.clear();
        for(int i=0; i<n; i++)
        {
            cin>>p[i];
        }
        int N=1<<n;
        for(int i=0; i<N; i++)
        {
            int cnt=0;
            double ans=1;
            for(int j=0; j<n; j++)
            {
                if(i&(1<<j))
                    cnt++;
                if(i&(1<<j))
                    ans=ans*p[j];
                else
                    ans=ans*(1-p[j]);
            }
            if(cnt==r)
            {
//                cout<<i<<" "<<ans<<"...\n";
                v.pb(mk(i,ans));
            }
        }
        double sum=0;
//        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
//            cout<<v[i].ff<<" "<<v[i].ss<<endl;
            sum+=v[i].ss;
//            cout<<sum<<" "<<v[i].ss<<"  ...>\n";
        }
//        cout<<sum<<" sum\n";
        cout<<"Case "<<cs++<<":\n";
        for(int i=0; i<n; i++)
        {
            double s=0;
            for(int j=0; j<v.size(); j++)
            {
                if(v[j].ff&(1<<i))
                    s+=v[j].ss;
            }
            cout<<prec(6)<<s/sum<<"\n";
        }
    }
}
