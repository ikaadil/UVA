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

vector<int>v;
int main()
{
//    fWrite;
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        v.clear();
//        cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
//       int sum=(s1[0]-'0')+(s1[2]-'0')+(s2[0]-'0')+(s2[2]-'0')+(s3[0]-'0')+(s3[2]-'0')+(s4[0]-'0')+(s4[2]-'0');
        int sum=0;
        v.pb(s1[0]-'0');
        v.pb(s1[2]-'0');
        v.pb(s2[0]-'0');
        v.pb(s2[2]-'0');
        v.pb(s3[0]-'0');
        v.pb(s3[2]-'0');
        v.pb(s4[0]-'0');
        v.pb(s4[2]-'0');
        for(int i=0;i<v.size();i++)
        {
            int a=2*v[i];
            sum+=a/10+a%10;
        }
//        cout<<sum<<" ";

        sum+=(s1[1]-'0')+(s1[3]-'0')+(s2[1]-'0')+(s2[3]-'0')+(s3[1]-'0')+(s3[3]-'0')+(s4[1]-'0')+(s4[3]-'0');
        if(sum%10==0)
            cout<<"Valid\n";
        else
            cout<<"Invalid\n";
    }
}

