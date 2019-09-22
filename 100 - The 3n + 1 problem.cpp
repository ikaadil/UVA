#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    int x,y,a,b;
    while(cin>>x>>y)
    {
        int ans=0;
        a=x,b=y;
        if(a>b)swap(a,b);
        for(int i=a; i<=b; i++)
        {
            int n=i;
            cnt=0;
            while(n!=1)
            {
                if(n&1)
                    n=3*n+1;
                else
                    n=n/2;
                cnt++;
            }
            ans=max(ans,cnt);

        }
        cout<<x<<" "<<y<<" "<<ans+1<<"\n";
    }
}
