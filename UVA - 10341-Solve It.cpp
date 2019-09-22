#include<bits/stdc++.h>
using namespace std;
int s[10001];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,a,b;
        char x[5];
        scanf("%d%d%d",&n,&m,&a);
        for(int i=1; i<=n; i++)
        {
            scanf("%s",x);
            if(x[0]=='S')
                s[i]=0;
            else s[i]=1;
        }
        int ans=0;
        for(int i=0; i<m; i++)
        {
            scanf("%s",x);
            if(x[0]=='W')
            {
                scanf("%d",&b);
                if(s[b]==0)
                {
                    if(b<=a)
                        ans++;
                }
                a=max(a,b);
            }
            else if(x[0]=='A')
                a=n;
        }
        printf("%d\n",ans);
    }
    return 0;
}
