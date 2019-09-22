
#include <bits/stdc++.h>

using namespace std;




#define fRead           freopen("input.txt","r",stdin)
#define fWrite          freopen("output.txt","w",stdout)

#define eps             1e-9
#define inf             0x3f3f3f3f
#define INF             2e18
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
#define rall(a)         a.rbegin(),a.rend()
#define SQR(a)          ((a)*(a))
#define Unique(a)       sort(all(a)),a.erase(unique(all(a)),a.end())
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(min(a,b),min(c,d))
#define max4(a,b,c,d)   max(max(a,b),max(c,d))
#define max5(a,b,c,d,e) max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e) min(min3(a,b,c),min(d,e))
#define Iterator(a)     __typeof__(a.begin())
#define rIterator(a)    __typeof__(a.rbegin())
#define FOR(a,it)       for(Iterator(a) it = a.begin();it != a.end(); it++)
#define rFOR(a,it)      for(rIterator(a) it = a.rbegin();it != a.rend(); it++)
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0)
#define CasePrint       pc('C'); pc('a'); pc('s'); pc('e'); pc(' '); write(qq++,false); pc(':'); pc(' ')
#define vi              vector <int>
#define vL              vector <LL>
#define For(I,A,B)      for(int I = (A); I  < (B); ++I)
#define rFor(I,A,B)     for(int I = (A); I >= (B); --I)
#define Rep(I,N)        For(I,0,N)
#define REP(I,N)        For(I, 1, N + 1)
#define gti             int, vi, greater<int>
#define gtL             LL, vL, greater<LL>
#define Found(a, b)     a.find(b) != a.end()



const LL pSz = 2000006;
bool np[pSz + 10];
vi prime;
LL prime_size;
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

int main()
{
//    fWrite;
    sieve();
    LL n;
    LL cs=1;
    while(cin>>n&&n)
    {
        LL sum=0;
        LL f=0;
        for(LL i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                f=1;
            }
        }
        if(!f)
            sum=n+1;
        else
        {
            LL cnt=0;
            for(LL i=0; prime[i]<=n&&i<prime.size(); i++)
            {
                if(n%prime[i]==0)
                {
                    cnt++;
                    LL pr=1;
                    while(n%prime[i]==0)
                    {

                        n=n/prime[i];
                        pr=pr*prime[i];
                    }
                    sum+=pr;
                }
            }
            if(n>1)
            {
               sum+=n;
               cnt++;

            }
            if(cnt<2)
                sum++;
        }
        cout<<"Case "<<cs++<<": "<<sum<<"\n";
    }

}

