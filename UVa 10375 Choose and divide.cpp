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


const int pSz = 10009;
bool np[pSz + 10];
vi prime;
int prime_size;
int e[pSz+10];
void sieve()
{
    np[0] = np[1] = 1;
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
    prime_size = prime.size();
}

void add(int n,int d)
{
    for(int i=0;i<prime.size();i++)
    {
        while(n%prime[i]==0)
        {
            e[i]+=d;
            n=n/prime[i];
        }
        if(n==1)
            break;
    }

}
void fac(int n,int d)
{
    for(int i=1;i<=n;i++)
    {
        add(i,d);
    }
}


int main()
{
  sieve();
  int p,q,r,s;
  while(cin>>p>>q>>r>>s)
  {
      memset(e,0,sizeof(e));
      fac(p,1);
      fac(q,-1);
      fac(p-q,-1);
      fac(r,-1);
      fac(s,1);
      fac(r-s,1);
      double ans=1;
      for(int i=0;i<prime.size();i++)
      {
          ans=ans*pow(prime[i],e[i]);
      }
      cout<<prec(5)<<ans<<"\n";
  }
}
