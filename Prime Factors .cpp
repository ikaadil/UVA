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
    long long int nu,p;
    bool f=0;
    while(1)
    {
//        if(f==1)
//            cout<<"\n";
//        f=1;
        cin>>nu;
        bool flag=0;
        if(nu==0)
            break;
        p=nu;

        if(nu<0)
        {
            cout<<nu<<" = "<<"-1";
            nu=nu*-1;
            flag=1;
        }
        else
            cout<<nu<<" = ";

        long long p=sqrt(nu);
        for(int i=0; i<v.size()&&v[i]<=p; i++)
        {
            if(nu%v[i]==0)
            {
                while(nu%v[i]==0)
                {
                    if(flag==1)
                    {
                        cout<<" x "<<v[i];

                    }
                    else
                    {
                        cout<<v[i];
                        flag=1;
                    }
                        nu=nu/v[i];

                }
            }

        }

        if(nu!=1&&p!=nu)
        {
            if(flag)
            cout<<" x "<<nu;
            else
            {
                cout<<nu;
            }
        }
        cout<<"\n";





    }

}




