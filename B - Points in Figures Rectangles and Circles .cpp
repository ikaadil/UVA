#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0, tc, kk=1;
    double xl[12], yh[12], xh[12], yl[12], x, y;
    string s;
    char c, type[12];
    while(cin>>c && c!='*')
    {
        type[n]=c;
        if(c=='r')     cin>>xl[n]>>yh[n]>>xh[n]>>yl[n];
        else cin>>xl[n]>>yh[n]>>xh[n];
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
            else
            {
                double dist = sqrt((x-xl[i])*(x-xl[i]) + (y-yh[i])*(y-yh[i]));
                if(xh[i]>dist)
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
