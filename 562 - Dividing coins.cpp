#include<bits/stdc++.h>
using namespace std;
int n1,n2;
int a[101];
int b[101];
int ans[101][101];
int lcs()
{
    for(int i=1; i<=n1; i++)
    {
        for(int j=1; j<=n2; j++)
        {
            if(a[i]==b[j])
                ans[i][j]=ans[i-1][j-1]+1;
            else
                ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
        }
    }
    return ans[n1][n2];
}
int main()
{
    int cs=1;
    while(cin>>n1>>n2&&n1+n2!=0)
    {
        for(int i=1; i<=n1; i++)
            cin>>a[i];
        for(int i=1; i<=n2; i++)
            cin>>b[i];
        cout<<"Twin Towers #"<<cs++<<"\nNumber of Tiles : "<<lcs()<<"\n\n";
    }
}

