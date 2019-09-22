#include<bits/stdc++.h>
using namespace std;
int ara[10001][10];
int main()
{
    for(int i=1; i<10001; i++)
    {
        int n=i;
        while(n)
        {
            int a=n%10;
            ara[i][a]++;;
            n=n/10;
        }
    }
    for(int i=1; i<10001; i++)
    {
        for(int j=0; j<10; j++)
            ara[i][j]+=ara[i-1][j];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<10; i++)
        {
            cout<<ara[n][i];
            if(i!=9)
                cout<<" ";
        }
//        if(t)
        cout<<"\n";
    }
}
