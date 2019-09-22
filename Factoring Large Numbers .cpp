#include<bits/stdc++.h>
using namespace std;
#define n 1000001
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
    long long int nu;
    bool flag=0;
    while(cin>>nu)
    {
        if(nu<0)
            break;
//        if(flag==1)
//            cout<<"\n";
//        flag=1;

        long long p=sqrt(nu);
        for(int i=0; i<v.size()&&v[i]<=p; i++)
        {

                while(nu%v[i]==0)
                {
                    cout<<"    "<<v[i]<<"\n";
                    nu=nu/v[i];
                }

        }
        if(nu!=1)
        {
            cout<<"    "<<nu<<"\n";
        }
        cout<<"\n";

    }

}




