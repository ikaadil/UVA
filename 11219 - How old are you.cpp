#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y,z;
        char ch;
        cin>>a>>ch>>b>>ch>>c;
        cin>>x>>ch>>y>>ch>>z;
        int cnt=c-z;
        if(b<y)
            cnt--;
        if(b==y&&a<x)
            cnt--;
        if(cnt<0)
            printf("Case #%d: Invalid birth date\n",cs++);
        else if(cnt>130)
        printf("Case #%d: Check birth date\n",cs++);
        else if(cnt==0)
            printf("Case #%d: 0\n",cs++);
        else
              printf("Case #%d: %d\n",cs++,cnt);

    }
}
