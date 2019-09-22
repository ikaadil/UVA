#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cs=1;
    int n;
    while(cin>>n&&n>-1)
    {
        int a=1,cnt=0;
        while(a<n)
        {
            cnt++;
            a*=2;
        }
        cout<<"Case "<<cs++<<": "<<cnt<<"\n";
    }
}
