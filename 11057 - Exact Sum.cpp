#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int ara[n];
        int x=0,y=1000001;
        for(int i=0; i<n; i++)
            cin>>ara[i];
        int m;
        cin>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ara[i]+ara[j]==m)
                {
                    if(abs(ara[i]-ara[j])<=abs(x-y))
                    {
                        x=ara[i];
                        y=ara[j];
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",min(x,y),max(x,y));

    }
}
