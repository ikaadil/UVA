#include<bits/stdc++.h>
using namespace std;
int n,m;
pair<string,string>p[33];
int genji[6];
bool flag=0;
int check(string s)
{
    if(s=="XXL")
        return 0;
    else if(s=="XL")
        return 1;
    else if(s=="L")
        return 2;
    else if(s=="M")
        return 3;
    else if(s=="S")
        return 4;
    else
        return 5;
}
void dp(int a)
{
    if(a==m)
    {
        flag=1;
        return;
    }
    if(flag)
        return ;
    if(genji[check(p[a].first)])
    {
        genji[check(p[a].first)]--;
        dp(a+1);
        genji[check(p[a].first)]++;
    }
     if(genji[check(p[a].second)])
    {
        genji[check(p[a].second)]--;
        dp(a+1);
        genji[check(p[a].second)]++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            cin>>p[i].first>>p[i].second;
        }
        for(int i=0; i<6; i++)
            genji[i]=n/6;
        flag=0;
        dp(0);
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
