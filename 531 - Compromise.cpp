#include<bits/stdc++.h>
using namespace std;
vector<string>v1,v2;
int mp[1001][1001];
int main()
{
    string s;
    while(cin>>s)
    {
        v1.clear();
        v2.clear();
        v1.push_back(s);
        while(cin>>s&&s!="#")
            v1.push_back(s);
        while(cin>>s&&s!="#")
            v2.push_back(s);
//            for(int i=0;i<v1.size();i++)
//                cout<<v1[i]<<" ";
//            cout<<endl;
//              for(int i=0;i<v2.size();i++)
//                cout<<v2[i]<<" ";
        memset(mp,0,sizeof(mp));
        int mx=0;
        for(int i=v1.size()-1; i>=0; i--)
        {
            for(int j=v2.size()-1; j>=0; j--)
            {
                if(v1[i]==v2[j])
                    mp[i][j]=mp[i+1][j+1]+1;
                else
                    mp[i][j]=max(mp[i+1][j],mp[i][j+1]);
                mx=max(mx,mp[i][j]);
            }
        }
        for(int i=0; i<v1.size(); i++)
        {
            for(int j=0; j<v2.size(); j++)
            {
                if(v1[i]==v2[j]&&mp[i][j]==mx)
                {
                    mx--;
                    cout<<v1[i];
                    if(mx==0)
                        cout<<"\n";
                    else cout<<" ";
                }
            }
        }
    }
}
