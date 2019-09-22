#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cs=1;
    while(cin>>s&&s!="*")
    {
        if(s=="Hajj")
           printf("Case %d: Hajj-e-Akbar\n",cs++);
        else
            printf("Case %d: Hajj-e-Asghar\n",cs++);
    }
}
