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
const int pSz = 1005;
bool np[pSz + 10];
vi prime;
int prime_size;
void sieve()
{
    np[0] = np[1] = 1;
    prime.pb(1);
    prime.pb(2);
    for(LL i = 4; i <= pSz; i+=2) np[i] = 1;
    for(LL i = 3; i <= pSz; i+=2)
    {
        if(!np[i])
        {
            prime.pb(i);
            for(LL j = i * i; j <= pSz; j += (i << 1)) np[j] = 1;
        }
    }

}
int main()
{
//    fWrite;
    sieve();
    int n,c;
    while(cin>>n>>c)
    {
        int l=0;
        int k=c;
        for(int i=0; i<prime.size(); i++)
        {
            if(prime[i]>n)
                break;
            l++;
        }
//       cout<<l<<"...\n";
        if(l&1)
            c=2*c-1;
        else
            c=2*c;
        cout<<n<<" "<<k<<": ";
        if(c>l)
            c=l;
        int f=0;
        for(int i=l/2-c/2,j=0; j<c; j++,i++)
        {
            if(f)
                cout<<" "<<prime[i];
            else cout<<prime[i];
            f=1;
        }
        cout<<"\n\n";
    }
}


