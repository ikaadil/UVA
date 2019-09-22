
#include<bits/stdc++.h>
using namespace std;
#define N 50001
int phi[N+10];
void euler()
{
    phi[0]=0;
    phi[1]=1;
    for(int i=2; i<N; i++)
    {
        if(phi[i]==0)
        {
            phi[i]=i-1;
            for(int j=2*i; j<N; j+=i)
            {
                if(phi[j]==0)phi[j]=j;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}
int main()
{
//   freopen("output.txt","w",stdout);
    euler();
    for(int i=1; i<N; i++)
        phi[i]+=phi[i-1];

    int n;
    while(cin>>n&&n)
    {
        cout<<2*phi[n]-1<<"\n";
    }
}


