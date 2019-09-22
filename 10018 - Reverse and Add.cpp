#include<bits/stdc++.h>
using namespace std;

string add(string a)
{
    string s="",b="";
    for(int i=a.size()-1; i>=0; i--)
        b+=a[i];

    int cnt=0;
    for(int i=a.size()-1; i>=0; i--)
    {
        int x=a[i]-'0'+b[i]-'0'+cnt;
        if(x>=10)
        {
            s+=(char)('0'+x-10);
            cnt=1;
        }
        else
        {
            s+=(char)('0'+x);
            cnt=0;
        }

    }
    if(cnt)
        s+=(char)('0'+cnt);

    string ans="";
    for(int i=s.size()-1; i>=0; i--)
        ans+=s[i];
    return ans;
}
bool pall(string p)
{
    string ans="";
    for(int i=p.size()-1; i>=0; i--)
        ans+=p[i];
    if(ans==p)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a;
        cin>>a;
        int cnt=0;
        while(!pall(a))
        {
            cnt++;
            a=add(a);
        }
        cout<<cnt<<" "<<a<<"\n";
    }
}

