ectionC++

/******************************************************************
***   Problem       :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()

//input
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define sf(t) scanf("%f",&t)
#define sd(t) scanf("%lf",&t)
#define sc(c) scanf("%c",&c)
#define sii(a,b) scanf("%d%d",&a,&b)
#define sll(a,b) scanf("%lld%lld",&a,&b)

//Output
#define P(a) printf("%dn",a)
#define PL(a) printf("%lldn",a)
#define PF(a) printf("%fn",a)
#define PD(a) printf("%lfn",a)
#define PS(a) printf("%sn",a)
#define PSN(a) printf("%s ",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)
#define PFN(a) printf("%f ",a)
#define PDN(a) printf("%lf ",a)
#define PP(a,b) printf("%d %dn",a,b)
#define PPN(a,b) printf("%d %d ",a,b)
#define PPL(a,b) printf("%lld %lldn",a,b)
#define PPLN(a,b) printf("%lld %lld ",a,b)

#define CP(a) cout<<a<<endl
#define CPN(a) cout<<a<<" "

#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define sz(x) (int)x.size()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define sqr(a) ((a)*(a))
#define abs(x) (((x)<0)?-(x):(x))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)      //count one. in long long use __builtin_popcountll(i)
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
#define btz(a)   __builtin_ctz(a)            //count binary trailling zero
#define un(v) ST(v), (v).erase(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

typedef  long long ll;
typedef  unsigned long long ull;

typedef  vector<int> vi;
typedef  vector<ll> vll;
typedef  vector<string> vs;
typedef  set<int> si;
typedef  set<string> ss;
typedef  map<int,int> mii;
typedef  map<ll,ll> mll;
typedef  map<string,int> msi;
typedef  map<char,int> mci;

template <typename T>string toString( T Number )
{
    stringstream st;
    st << Number;
    return st.str();
}
template <typename T> T SOD(T n)
{
    __typeof(n) sum=0;
    for(__typeof(n) i=1; i*i<=n; i++)sum+=(n%i)?0:((i*i==n)?i:i+n/i);
    return sum;
}

//For Define
#define forab(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define for0(i,n) forab(i,0,(n)-1)
#define for1(i,n) forab(i,1,n)
#define rforab(i,b,a) for(__typeof(b) i=(b);i>=(a);i--)
#define rfor0(i,n) rforba(i,(n)-1,0)
#define rfor1(i,n) rforba(i,n,1)
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

//Debug
#define dbg(x) cout << #x << " -> " << (x) << endl;
#define dbgsarr(i,a) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define dbgarr(a,start,end) for(ll i=start;i<=end;i++) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define dbgmat(mat,row,col) for(ll i=0;i<row;i++) {for(ll j=0;j<col;j++) cout<<mat[i][j]<<" ";cout<<endl;}
#define dbgst(a,b,start,end) for(ll i=start;i<=end;i++) cout<<#a<<"["<<i<<"]."<<#b<<" -> "<<a[i].b<<" "<<endl;

//File input/output
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

//upper bound and lower bound
#define LB(a,value) (lower_bound(all(a),value)-a.begin())
#define UB(a,value) (upper_bound(all(a),value)-a.begin())

//Test Case & New line
#define Case(no) printf("Case %d: ",++no)
#define nl puts("")

int stringconvert(string s)
{
    int p;
    istringstream st(s);
    st>>p ;
    return p;
}

ll pow(ll a,ll b, ll m)
{
    ll res = 1;
    while(b)
    {
        if(b & 1)
        {
            res = ( (res % m) * (a % m) ) %m ;
        }
        a= ((a%m) * (a%m)) %m;
        b >>= 1;
    }
    return res;
}
ll modInverse(ll a, ll m)
{
    return pow(a,m-2,m);
}

////============ CONSTANT ===============////
#define mx7   10000007
#define mx6   1000006
#define mx5   100005
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mx    (100010)
#define mod   1000000007
////=====================================////

int tarea(int x1, int y1, int x2, int y2, int x3, int y3)  //i don't use struct bcz it's tough for me.
{
    return x1*y2-y1*x2+x2*y3-y2*x3+x3*y1-y3*x1;
}

bool online(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int  minx,miny,maxx,maxy;
    minx=min(x1,x2);
    miny=min(y1,y2);
    maxx=max(x1,x2);
    maxy=max(y1,y2);

    if(minx<=x3 && maxx>=x3 && miny<=y3 && maxy>=y3 )
        return true;
    else
        return false;
}

bool inrect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int  minx,miny,maxx,maxy;
    minx=min(x3,x4);
    miny=min(y3,y4);
    maxx=max(x3,x4);
    maxy=max(y3,y4);

    if(minx<=x1 && maxx>=x1 && miny<=y1 && maxy>=y1
            && minx<=x2 && maxx>=x2 && miny<=y2 && maxy>=y2)
        return true;
    else
        return false;
}

bool intersection(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int a1=tarea(x3,y3,x4,y4,x1,y1);
    int a2=tarea(x3,y3,x4,y4,x2,y2);
    int a3=tarea(x1,y1,x2,y2,x3,y3);
    int a4=tarea(x1,y1,x2,y2,x4,y4);

//    PP(a1,a2),PP(a3,a4);
//    P(online(x3,y3,x4,y4,x1,y1));
//    nl;
    if(a1*a2<0 && a3*a4<0) return true;
    else if(a1==0 && online(x3,y3,x4,y4,x1,y1)) return true;
    else if(a2==0 && online(x3,y3,x4,y4,x2,y2)) return true;
    else if(a3==0 && online(x1,y1,x2,y2,x3,y3)) return true;
    else if(a4==0 && online(x1,y1,x2,y2,x4,y4)) return true;
    else
        return false;
}

int main()
{
//    input;
//    output;
    int t;
    si(t);
    while(t--)
    {
        bool f=0;
        int xs,ys,xe,ye,xleft,ytop,xright,ybot;
        sii(xs,ys),sii(xe,ye),sii(xleft,ytop),sii(xright,ybot);

        if(xleft>xright) swap(xleft,xright);
        if(ybot>ytop) swap(ybot,ytop);

        if(intersection(xs,ys,xe,ye,xleft,ybot,xright,ybot)) f=1;
        else if(intersection(xs,ys,xe,ye,xright,ybot,xright,ytop)) f=1;
        else if(intersection(xs,ys,xe,ye,xright,ytop,xleft,ytop)) f=1;
        else if(intersection(xs,ys,xe,ye,xleft,ytop,xleft,ybot)) f=1;
        else if(inrect(xs,ys,xe,ye,xleft,ytop,xright,ybot)) f=1;

        if(f)
            puts("T");
        else
            puts("F");

//         P(intersection(xs,ys,xe,ye,xright,ytop,xleft,ytop));

    }

    return 0;
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
/******************************************************************
***   Problem       :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()

//input
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define sf(t) scanf("%f",&t)
#define sd(t) scanf("%lf",&t)
#define sc(c) scanf("%c",&c)
#define sii(a,b) scanf("%d%d",&a,&b)
#define sll(a,b) scanf("%lld%lld",&a,&b)

//Output
#define P(a) printf("%dn",a)
#define PL(a) printf("%lldn",a)
#define PF(a) printf("%fn",a)
#define PD(a) printf("%lfn",a)
#define PS(a) printf("%sn",a)
#define PSN(a) printf("%s ",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)
#define PFN(a) printf("%f ",a)
#define PDN(a) printf("%lf ",a)
#define PP(a,b) printf("%d %dn",a,b)
#define PPN(a,b) printf("%d %d ",a,b)
#define PPL(a,b) printf("%lld %lldn",a,b)
#define PPLN(a,b) printf("%lld %lld ",a,b)

#define CP(a) cout<<a<<endl
#define CPN(a) cout<<a<<" "

#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define sz(x) (int)x.size()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define sqr(a) ((a)*(a))
#define abs(x) (((x)<0)?-(x):(x))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)      //count one. in long long use __builtin_popcountll(i)
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
#define btz(a)   __builtin_ctz(a)            //count binary trailling zero
#define un(v) ST(v), (v).erase(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

typedef  long long ll;
typedef  unsigned long long ull;

typedef  vector<int> vi;
typedef  vector<ll> vll;
typedef  vector<string> vs;
typedef  set<int> si;
typedef  set<string> ss;
typedef  map<int,int> mii;
typedef  map<ll,ll> mll;
typedef  map<string,int> msi;
typedef  map<char,int> mci;

template <typename T>string toString( T Number )
{
    stringstream st;
    st << Number;
    return st.str();
}
template <typename T> T SOD(T n)
{
    __typeof(n) sum=0;
    for(__typeof(n) i=1; i*i<=n; i++)sum+=(n%i)?0:((i*i==n)?i:i+n/i);
    return sum;
}

//For Define
#define forab(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define for0(i,n) forab(i,0,(n)-1)
#define for1(i,n) forab(i,1,n)
#define rforab(i,b,a) for(__typeof(b) i=(b);i>=(a);i--)
#define rfor0(i,n) rforba(i,(n)-1,0)
#define rfor1(i,n) rforba(i,n,1)
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

//Debug
#define dbg(x) cout << #x << " -> " << (x) << endl;
#define dbgsarr(i,a) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define dbgarr(a,start,end) for(ll i=start;i<=end;i++) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define dbgmat(mat,row,col) for(ll i=0;i<row;i++) {for(ll j=0;j<col;j++) cout<<mat[i][j]<<" ";cout<<endl;}
#define dbgst(a,b,start,end) for(ll i=start;i<=end;i++) cout<<#a<<"["<<i<<"]."<<#b<<" -> "<<a[i].b<<" "<<endl;

//File input/output
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

//upper bound and lower bound
#define LB(a,value) (lower_bound(all(a),value)-a.begin())
#define UB(a,value) (upper_bound(all(a),value)-a.begin())

//Test Case & New line
#define Case(no) printf("Case %d: ",++no)
#define nl puts("")

int stringconvert(string s)
{
    int p;
    istringstream st(s);
    st>>p ;
    return p;
}

ll pow(ll a,ll b, ll m)
{
    ll res = 1;
    while(b)
    {
        if(b & 1)
        {
            res = ( (res % m) * (a % m) ) %m ;
        }
        a= ((a%m) * (a%m)) %m;
        b >>= 1;
    }
    return res;
}
ll modInverse(ll a, ll m)
{
    return pow(a,m-2,m);
}

////============ CONSTANT ===============////
#define mx7   10000007
#define mx6   1000006
#define mx5   100005
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mx    (100010)
#define mod   1000000007
////=====================================////

int tarea(int x1, int y1, int x2, int y2, int x3, int y3)  //i don't use struct bcz it's tough for me.
{
    return x1*y2-y1*x2+x2*y3-y2*x3+x3*y1-y3*x1;
}

bool online(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int  minx,miny,maxx,maxy;
    minx=min(x1,x2);
    miny=min(y1,y2);
    maxx=max(x1,x2);
    maxy=max(y1,y2);

    if(minx<=x3 && maxx>=x3 && miny<=y3 && maxy>=y3 )
        return true;
    else
        return false;
}

bool inrect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int  minx,miny,maxx,maxy;
    minx=min(x3,x4);
    miny=min(y3,y4);
    maxx=max(x3,x4);
    maxy=max(y3,y4);

    if(minx<=x1 && maxx>=x1 && miny<=y1 && maxy>=y1
            && minx<=x2 && maxx>=x2 && miny<=y2 && maxy>=y2)
        return true;
    else
        return false;
}

bool intersection(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int a1=tarea(x3,y3,x4,y4,x1,y1);
    int a2=tarea(x3,y3,x4,y4,x2,y2);
    int a3=tarea(x1,y1,x2,y2,x3,y3);
    int a4=tarea(x1,y1,x2,y2,x4,y4);

//    PP(a1,a2),PP(a3,a4);
//    P(online(x3,y3,x4,y4,x1,y1));
//    nl;
    if(a1*a2<0 && a3*a4<0) return true;
    else if(a1==0 && online(x3,y3,x4,y4,x1,y1)) return true;
    else if(a2==0 && online(x3,y3,x4,y4,x2,y2)) return true;
    else if(a3==0 && online(x1,y1,x2,y2,x3,y3)) return true;
    else if(a4==0 && online(x1,y1,x2,y2,x4,y4)) return true;
    else
        return false;
}

int main()
{
//    input;
//    output;
    int t;
    si(t);
    while(t--)
    {
        bool f=0;
        int xs,ys,xe,ye,xleft,ytop,xright,ybot;
        sii(xs,ys),sii(xe,ye),sii(xleft,ytop),sii(xright,ybot);

        if(xleft>xright) swap(xleft,xright);
        if(ybot>ytop) swap(ybot,ytop);

        if(intersection(xs,ys,xe,ye,xleft,ybot,xright,ybot)) f=1;
        else if(intersection(xs,ys,xe,ye,xright,ybot,xright,ytop)) f=1;
        else if(intersection(xs,ys,xe,ye,xright,ytop,xleft,ytop)) f=1;
        else if(intersection(xs,ys,xe,ye,xleft,ytop,xleft,ybot)) f=1;
        else if(inrect(xs,ys,xe,ye,xleft,ytop,xright,ybot)) f=1;

        if(f)
            puts("T");
        else
            puts("F");

//         P(intersection(xs,ys,xe,ye,xright,ytop,xleft,ytop));

    }

    return 0;
}
