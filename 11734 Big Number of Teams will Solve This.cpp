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

int mp1[300],mp2[300];
int main()
{
    int t,cs=1;
    scanf("%d ",&t);
    while(t--)
    {
        string s1,s2;
        memset(mp1,0,sizeof(mp1));
        memset(mp2,0,sizeof(mp2));
        getline(cin,s1);
        getline(cin,s2);
        cout<<"Case "<<cs++<<": ";
        if(s1==s2)
        {
            cout<<"Yes\n";

        }
        else
        {
            for(int i=0; i<s1.size(); i++)
            {
                if(s1[i]>='A'&&s1[i]<='Z')
                    mp1[s1[i]]++;
                else if(s1[i]>='a'&&s1[i]<='z')
                    mp1[s1[i]]++;

            }
            for(int i=0; i<s2.size(); i++)
            {
                if(s2[i]>='A'&&s2[i]<='Z')
                    mp2[s2[i]]++;
                else if(s2[i]>='a'&&s2[i]<='z')
                    mp2[s2[i]]++;

            }
            int f=0;
            for(int i=0; i<300; i++)
            {
                if(mp1[i]!=mp2[i])
                {
                    f=1;
                    break;
                }
            }
            if(f)
                cout<<"Wrong Answer\n";
            else
                cout<<"Output Format Error\n";
        }
    }
}
