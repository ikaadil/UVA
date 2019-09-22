#include<bits/stdc++.h>
using namespace std;
#define n 330000
int ara[n];
vector<int>v;
void sieve()
{
    ara[0]=ara[1]=1;
    for(int i=2; i<n; i++)
    {
        if(ara[i]==0)
        {
            for(int j=i*2; j<n; j+=i)ara[j]=1;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(ara[i]==0)v.push_back(i);
    }
}
int main()
{
    sieve();

    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        int i=0;
        if(a>b)
            swap(a,b);
        while(v[i]<a)
            i++;
        while(v[i]<=b)
        {
            int t=-1;
            if(v[i+1]-v[i]==v[i+2]-v[i+1]&&v[i+2]<=b)
            {
                cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2];
                t=v[i+1]-v[i];
                i+=2;

                while(v[i+1]-v[i]==t&&v[i+1]<=b)
                {
                    cout<<" "<<v[i+1];
                    i++;
                }
                cout<<"\n";
            }
            else
            {
                i++;
            }

        }
//        cout<<"\n";

    }

}
