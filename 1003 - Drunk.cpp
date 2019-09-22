#include<bits/stdc++.h>
using namespace std;
vector<string>v[10000+1];
map<string,int>mp;
set<string>s;
int flag;
void dfs(string s)
{
    if(flag)
        return;
    mp[s]=1;
    for(int i=0; i<17; i++)
    {
        string f=v[s][i];
        if(mp[f]==1)
            flag=1;
        else if(mp[f]==0)
            dfs(f);
    }
}
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            string s1,s2;
            cin>>s1>>s2;
            s.insert(s1);
            s.insert(s2);
            v[s1].push_back(s2);
        }
        flag=0;
        for(set<string >::iterator it=s.begin();it!=s.end();it++)
        {
            if(mp[*it]==0)
                dfs(*it);
        }

    }
}
