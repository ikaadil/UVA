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

map<string,int>mp;

int main()
{
    string s="";
    for(int i='a'; i<='z'; i++)
        s+=(char)i;
//    cout<<s;
//    cout<<s.size();
    int cnt=1;
    for(int i=0; i<26; i++)
    {
        string st="";
        st=s[i];
//        cout<<st<<endl;
        mp[st]=cnt;
        cnt++;
    }
    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            string st="";
            st+=s[i];
            st+=s[j];
//            cout<<st<<endl;
            mp[st]=cnt;
            cnt++;
        }
    }

    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                string st="";
                st+=s[i];
                st+=s[j];
                st+=s[k];
//cout<<st<<endl;
                mp[st]=cnt;
                cnt++;
            }
        }
    }
    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                for(int p=k+1; p<26; p++)
                {
                    string st="";
                    st+=s[i];
                    st+=s[j];
                    st+=s[k];
                    st+=s[p];
                    mp[st]=cnt;
                    cnt++;
                }
            }
        }
    }



    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                for(int p=k+1; p<26; p++)
                {
                    for(int q=p+1; q<26; q++)
                    {
                        string st="";
                        st+=s[i];
                        st+=s[j];
                        st+=s[k];
                        st+=s[p];
                        st+=s[q];
                        mp[st]=cnt;
                        cnt++;
                    }
                }
            }
        }
    }
    string str;
    while(cin>>str)
    {
        cout<<mp[str]<<"\n";

    }
}




