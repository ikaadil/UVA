#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>a;
void lis(const vector<int>&ara,vector<int>&len)
{
    a.clear();
//cout<<len.size();
    for(int i=0; i<ara.size(); i++)
    {
//        cout<<ara[i]<<" ";
        const int val=ara[i];
        int pos=lower_bound(a.begin(),a.end(),val)-a.begin();
//        cout<<pos<<" ";
        if(pos==a.size())
            a.push_back(val);
        else
            a[pos]=val;
        len[i]=pos+1;
    }
}
int main()
{

        while(cin>>n){
        vector<int>ara(n);
        vector<int>as(n);
        vector<int>des(n);
        for(int i=0; i<n; i++)
            cin>>ara[i];
        lis(ara,as);
        reverse(ara.begin(),ara.end());
        lis(ara,des);
        int ans=0;
        for(int i=0; i<n; i++)
        {
            int p=min(as[i],des[n-1-i]);
            ans=max(ans,2*p-1);
        }
        cout<<ans<<"\n";

    }
}
