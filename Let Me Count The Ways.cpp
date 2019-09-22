#include<bits/stdc++.h>
using namespace std;
long long ara[30001];
int main()
{
    int a[5]= {1,5,10,25,50};
    ara[0]=1;
    for(int j=0; j<5; j++)
    {
        for(int i=0; i<=30000; i++)
        {
            if(i>=a[j])
                ara[i]+=ara[i-a[j]];
        }
    }
    int n;
//    for(int i=1; i<20; i++)
//        cout<<ara[i]<<" ";
    while( cin>>n)
    {
        if(ara[n]!=1)
        cout<<"There are "<<ara[n]<<" ways to produce "<<n<<" cents change.\n";
        else
            cout<<"There is only "<<ara[n]<<" way to produce "<<n<<" cents change.\n";

    }
}
