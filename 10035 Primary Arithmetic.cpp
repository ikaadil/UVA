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
int main()
{
    string s1,s2;
//    fWrite;
    while(cin>>s1>>s2)
    {
        if(s1[0]=='0'&&s2[0]=='0')
            break;
        int c=0;
        int cnt=0;
        if(s1.size()<s2.size())
            swap(s1,s2);
        reverse(all(s1));
        reverse(all(s2));
        int a=s2.size();
        while(a!=s1.size())
        {
            s2+='0';
            a++;
        }
//        reverse(all(s1));
//        reverse(all(s2));
//        cout<<s1<<endl<<s2<<endl;
        for(int i=0; i<s1.size(); i++)
        {
            int p=s1[i]-'0'+s2[i]-'0'+c;
            if(p>9)
                c=1;
            else c=0;
            if(c)
                cnt++;

        }
        if(cnt==0)
            cout<<"No carry operation.\n";
            else if(cnt==1)
                cout<<cnt<<" carry operation.\n";
        else
            cout<<cnt<<" carry operations.\n";



    }
}
