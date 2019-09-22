#include<bits/stdc++.h>
using namespace std;
long long int mp[61][61];
string s;
long long int dp(int i,int j)
{
    if(i>j)
        return 0;
    if(mp[i][j]!=-1)
        return mp[i][j];
    long long int val=dp(i+1,j)+dp(i,j-1)-dp(i+1,j-1);
    if(s[i]==s[j])
        val+=1+dp(i+1,j-1);
    return mp[i][j]=val;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        memset(mp,-1,sizeof(mp));
        cout<<dp(0,s.size()-1)<<"\n";
    }

}
