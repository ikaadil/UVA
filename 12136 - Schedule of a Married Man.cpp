#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,w,x,y,z,s1,s2,t1,t2;
        char ch;
        cin>>a>>ch>>b;
        s1=a*60+b;
        cin>>c>>ch>>d;
        t1=c*60+d;
        if(s1>t1)
            swap(s1,t1);

         cin>>x>>ch>>y;
        s2=x*60+y;
        cin>>w>>ch>>z;
        t2=w*60+z;
        if(s2>t2)
            swap(s2,t2);
        if((s2>=s1&&s2<=t1)||(t2>=s1&&t2<=t1)||(t1>=s2&&t1<=t2)||(s1>=s2&&s1<=t2))
            cout<<"Case "<<cs++<<": Mrs Meeting\n";
            else
            cout<<"Case "<<cs++<<": Hits Meeting\n";
    }

}
