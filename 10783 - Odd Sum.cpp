#include<bits/stdc++.h>
using namespace std;
int ara[101];
int main()
{
    for(int i=1;i<101;i++)
    {
        if(i&1)
            ara[i]=i+ara[i-1];
        else
            ara[i]+=ara[i-1];
    }
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<"Case "<<cs++<<": "<<ara[b]-ara[a-1]<<"\n";
    }
}
