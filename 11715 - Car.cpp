#include <bits/stdc++.h>

using namespace std;
#define inf             0x3f3f3f3f
#define INF             2e18
#define eps             1e-9

#define Fast            ios_base::sync_with_stdio(0);cin.tie(0)
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


int main()
{
   int c,cs=1;
   while(cin>>c&&c!=0)
   {
       cout<<"Case "<<cs++<<": ";
       if(c==1)
       {
          double u,v,t;
          cin>>u>>v>>t;
          double s,a;
          a=(v-u)/t;
          s=u*t+.5*a*t*t;
          cout<<prec(3)<<s<<" "<<prec(3)<<a<<"\n";
       }
       else if(c==2)
       {
           double u,v,a;
           cin>>u>>v>>a;
           double s,t;
           t=(v-u)/a;
           s=u*t+.5*a*t*t;
           cout<<prec(3)<<s<<" "<<prec(3)<<t<<"\n";
       }
       else if(c==3)
       {
           double u,a,s;
           cin>>u>>a>>s;
           double v,t;
           v=sqrt(u*u+2*a*s);
           t=(v-u)/a;
           cout<<prec(3)<<v<<" "<<prec(3)<<t<<"\n";
       }
       else
       {
           double v,a,s;
           cin>>v>>a>>s;
           double  t,u;
           u=sqrt(v*v-2*a*s);
           t=(v-u)/a;
           cout<<prec(3)<<u<<" "<<prec(3)<<t<<"\n";
       }
   }
}

