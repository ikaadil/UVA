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



int main()
{
//    fWrite;
    int t;
    cin>>t;
    cout<<"INTERSECTING LINES OUTPUT\n";

    while(t--)
    {
        double x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        double m1,m2;
        m1=(y1-y2)*(x3-x4)-(x1-x2)*(y3-y4);
        m2=(y1-y3)*(x1-x2)*(x3-x4)-x1*(y1-y2)*(x3-x4)+x3*(y3-y4)*(x1-x2);
        if(m1==0&&m2==0)
            cout<<"LINE\n";
        else if(m1==0)
        cout<<"NONE\n";
        else
        {
            double z=(y3-y1)*(x1-x2)*(x3-x4)+x1*(y1-y2)*(x3-x4)-x3*(y3-y4)*(x1-x2);
            double x=z/m1;
            double y;
            if(x1!=x2)
            {
                y=((y1-y2)/(x1-x2))*x-((y1-y2)/(x1-x2))*x1+y1;
            }
            else
            {
                y=((y3-y4)/(x3-x4))*x-((y3-y4)/(x3-x4))*x3+y3;
            }
            cout<<"POINT "<<prec(2)<<x<<" "<<y<<"\n";
        }
    }
    cout<<"END OF OUTPUT\n";
}

