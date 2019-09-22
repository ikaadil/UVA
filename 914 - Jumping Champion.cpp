#include<bits/stdc++.h>
using namespace std;
#define n 10000000
int ara[n];

void sieve()
{
    long long int i,j;
    ara[0]=1;
    ara[1]=1;
    for(i=4; i<=n; i+=2)
        ara[i]=1;
    for(i=3; i*i<=n; i++)
    {
        if(ara[i]==0)
        {
            for(j=i*i; j<=n; j+=2*i)
                ara[j]=1;
        }
    }


}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int l,u;
        cin>>l>>u;
        for(l; ; l++)
        {
            if(ara[l]==0)
                break;
        }
//        for(u; ; u++)
//        {
//            if(ara[u]==0)
//                break;
//        }
//        cout<<l<<" "<<u<<endl;

        int b[200]={0};
         vector<int>v;
        for(int i=l;i<=u;i++)
        {
            if(ara[i]==0)
            {
                v.push_back(i);
            }
        }
        if(v.size()==0)
        {

            cout<<"No jumping champion"<<endl;
            continue;
        }
        for(int i=0;i<v.size()-1;i++)
        {
            int d=v[i+1]-v[i];
            if(d>=0)
            b[d]++;
        }
        int maxi=0,number=-1;
        for(int i=0;i<200;i++)
        {

            if(maxi<b[i])
            {
                maxi=b[i];
                number=i;
            }
            else if(maxi==b[i])
                number=-1;
        }
        if(number==-1)
            cout<<"No jumping champion"<<endl;
        else
        cout<<"The jumping champion is "<<number<<endl;


    }
    return 0;

}
