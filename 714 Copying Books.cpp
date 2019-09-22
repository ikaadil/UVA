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

int a[501];
int n,k;
vector<int>v[501];
int bs(int x)
{
    int s=0;
    int cnt=1;
    for(int i=n; i>=1; i--)
    {
        if(s+a[i]<=x)
        {
            s+=a[i];
        }
        else
        {
            cnt++;
            s=a[i];
        }
    }
//    cout<<cnt<<" "<<x<<endl;
    if(cnt>k)
        return 0;
    else
        return 1;

}
int main()
{

//    fWrite;
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<501; i++)
            v[i].clear();
        cin>>n>>k;
        int k1=k;
        int sum=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(n==k)
        {
            cout<<a[1];
            for(int i=2; i<=n; i++)
            {
                cout<<" / "<<a[i];
            }
            cout<<"\n";
            continue;
        }
        int ans=0;
        int l=0,h=sum;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(bs(mid))
            {
                h=mid-1;
                ans=mid;
            }
            else
            {
                l=mid+1;
            }
        }
//        cout<<ans<<"...\n";
        int s=0;
        for(int i=n; i>=1; i--)
        {
//            cout<<s<<" "<<i<<endl;
            if(i==k&&s+a[i]<=ans)
            {
                v[k].pb(a[i]);
                k--;
                s=a[i];
            }
            else if(s+a[i]<=ans)
            {
                v[k].pb(a[i]);
                s+=a[i];
            }
            else
            {
                k--;
                v[k].pb(a[i]);
                s=a[i];
            }
        }
//        cout<<k<<".....\n";
        for(int i=1; i<=k1; i++)
        {
            reverse(all(v[i]));
            for(int j=0; j<v[i].size(); j++)
            {
                if(i==k1&&j==v[i].size()-1)
                    cout<<v[i][j];
                else
                    cout<<v[i][j]<<" ";
            }
            if(i!=k1)
                cout<<"/ ";
        }
        cout<<"\n";





    }
}
