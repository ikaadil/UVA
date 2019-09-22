#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    cin>>t;
    vector<int>v(3);
    while(t--)
    {
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        cout<<"Case "<<cs++<<": "<<v[1]<<"\n";
    }
}
