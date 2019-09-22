#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cstdlib>
#include <limits>
#include <iostream>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
#include <random>
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;


#define gc getchar unlocked
#ifndef ONLINE JUDGE
#define gc getchar
#endif // ONLINE JUDGE

#define pc putchar_unlocked
#ifndef ONLINE JUDGE
#define pc putchar
#endif // ONLINE JUDGE

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


const int pSz = 101;
bool np[pSz + 10];
vi prime;
int prime_size;
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
vector<int>v;
int main()
{
//    fWrite;
    sieve();
    int n;
    int f=0;
    while(cin>>n&&n)
    {

        f=1;
        int a[n+1];
        v.clear();
        for(int i=1; i<=n; i++)
        {
            a[i]=i;
        }
        for(int j=0; j<prime.size()&&prime[j]<=n; j++)
        {
            int cnt=0;
            for(int i=1; i<=n; i++)
            {
                while(a[i]%prime[j]==0)
                {
                    cnt++;
                    a[i]=a[i]/prime[j];
                }
            }

            v.pb(cnt);
        }
        cout<<setw(3)<<n<<"! =";
        for(int i=0; i<v.size(); i++)
        {
            if (i % 15 == 0 && i != 0)
                cout << "\n      ";
            cout<<setw(3)<<v[i];
        }
        cout<<"\n";

    }


}
