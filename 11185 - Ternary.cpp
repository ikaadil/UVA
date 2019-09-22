#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    vector<int>v;
    while(cin>>n&&n>=0)
    {
        if(n==0)
        {
            cout<<"0\n";
            continue;
        }
        long long  a=0;
        while(n)
        {
            v.push_back(n%3);
            n=n/3;

        }
        for(int i=v.size()-1; i>=0; i--)
            cout<<v[i];
        v.clear();
        cout<<"\n";
    }
}
