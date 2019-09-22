#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
string s1,s2;
int f(int n,int m)
{
    for(int i=0; i<=max(n,m); i++)
        dp[0][i]=dp[i][0]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int main()
{
//    freopen("output.txt","w",stdout);
   char t[10];
    cin.getline(t, 10);
    int test = atoi(t);
    while(test--)
    {
//        memset(dp,0,sizeof(dp));
        getline(cin, s1);
//        if(s1=="")
//            cout<<"0\n";
//        cin>>c;
        s2="";
        for(int i=s1.size()-1; i>=0; i--)
            s2+=s1[i];
//        cout<<s1<<" "<<s2<<endl;
//        cout<<s1.size()<<" "<<s2.size()<<endl;

        cout<<f(s1.size(),s2.size())<<"\n";

    }

}




