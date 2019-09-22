///     Raihan Ruhin


#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double ar = (x1-x2)*(y2-y3)-(x2-x3)*(y1-y2);
    return abs(ar/2.0);
}

bool inside(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y)
{
    double a = area(x1, y1, x2, y2, x, y);
    if(a==0) return false; //border
    double b = area(x3, y3, x2, y2, x, y);
    if(b==0) return false;
    double c = area(x3, y3, x1, y1, x, y);
    if(c==0) return false;
    double abc = area(x1, y1, x2, y2, x3, y3);
    if((a+b+c+.00000005)>abc && (a+b+c-.00000005)<abc) return true;
return false;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n=0, tc, kk=1;
    double xl[12], yh[12], xh[12], yl[12], x, y, xx[12], yy[12];
    string s;
    char c, type[12];
    while(cin>>c && c!='*')
    {
        type[n]=c;
        if(c=='r')     cin>>xl[n]>>yh[n]>>xh[n]>>yl[n];
        else if(c=='c') cin>>xl[n]>>yh[n]>>xh[n];
        else cin>>xl[n]>>yh[n]>>xh[n]>>yl[n]>>xx[n]>>yy[n];
        n++;
    }
    int cnt=1;
    while(cin>>x>>y && !(x==9999.9 && y==9999.9))
    {
        bool chk=false;
        for(int i=0; i<n; i++)
            if(type[i]=='r')
            {
                if(x>xl[i] && x<xh[i] && y>yl[i] && y<yh[i])
                {
                    cout<<"Point "<<cnt<<" is contained in figure "<<i+1<<"\n";
                    chk=true;
                }
            }
            else if(type[i]=='c')
            {
                double dist = sqrt((x-xl[i])*(x-xl[i]) + (y-yh[i])*(y-yh[i]));
                if(xh[i]>dist)
                {
                    cout<<"Point "<<cnt<<" is contained in figure "<<i+1<<"\n";
                    chk=true;
                }
            }
            else
            {
                if(inside(xl[i], yh[i], xh[i], yl[i], xx[i], yy[i], x, y))
                {
                    cout<<"Point "<<cnt<<" is contained in figure "<<i+1<<"\n";
                    chk=true;
                }
            }

        if(!chk)
            cout<<"Point "<<cnt<<" is not contained in any figure\n";
        cnt++;
    }
    return 0;
}
