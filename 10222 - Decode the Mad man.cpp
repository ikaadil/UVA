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
//    fWrite;
    char a[10005];
    int i,l;
    while(gets(a))
    {
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]==']')
                a[i]='p';
            else if(a[i]=='[')
                a[i]='o';
            else if(a[i]=='p' || a[i]=='P')
                a[i]='i';
            else if(a[i]=='o' || a[i]=='O')
                a[i]='u';
            else if(a[i]=='i' || a[i]=='I')
                a[i]='y';
            else if(a[i]=='u' || a[i]=='U')
                a[i]='t';
            else if(a[i]=='y' || a[i]=='Y')
                a[i]='r';
            else if(a[i]=='t' || a[i]=='T')
                a[i]='e';
            else if(a[i]=='r' || a[i]=='R')
                a[i]='w';
            else if(a[i]=='e' || a[i]=='E')
                a[i]='q';

            else if(a[i]=='\'')
                a[i]='l';
            else if(a[i]==';')
                a[i]='k';
            else if(a[i]=='l' || a[i]=='L')
                a[i]='j';
            else if(a[i]=='k' || a[i]=='K')
                a[i]='h';
            else if(a[i]=='j' || a[i]=='J')
                a[i]='g';
            else if(a[i]=='h' || a[i]=='H')
                a[i]='f';
            else if(a[i]=='g' || a[i]=='G')
                a[i]='d';
            else if(a[i]=='f' || a[i]=='F')
                a[i]='s';
            else if(a[i]=='d' || a[i]=='D')
                a[i]='a';

            else if(a[i]=='/')
                a[i]=',';
            else if(a[i]=='.')
                a[i]='m';
            else if(a[i]==',')
                a[i]='n';
            else if(a[i]=='m' || a[i]=='M')
                a[i]='b';
            else if(a[i]=='n' || a[i]=='N')
                a[i]='v';
            else if(a[i]=='b' || a[i]=='B')
                a[i]='c';
            else if(a[i]=='v' || a[i]=='V')
                a[i]='x';
            else if(a[i]=='c' || a[i]=='C')
                a[i]='z';

            else if(a[i]=='=')
                a[i]='0';
            else if(a[i]=='-')
                a[i]='9';
            else if(a[i]=='0')
                a[i]='8';
            else if(a[i]=='9')
                a[i]='7';
            else if(a[i]=='8')
                a[i]='6';
            else if(a[i]=='7')
                a[i]='5';
            else if(a[i]=='6')
                a[i]='4';
            else if(a[i]=='5')
                a[i]='3';
            else if(a[i]=='4')
                a[i]='2';
            else if(a[i]=='3')
                a[i]='1';
            else if(a[i]=='2')
                a[i]='`';
        }
        puts(a);
    }
    return 0;
}

