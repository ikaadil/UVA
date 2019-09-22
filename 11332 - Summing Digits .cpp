#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    while(s!="0")
    {
        int sum=0;
        for(int i=0; i<s.size(); i++)
        {
            sum+=s[i]-'0';
        }
//        cout<<sum;
        int x=sum/10+sum%10;
//        cout<<x<<endl;
        sum=x/10+x%10;

        cout<<sum<<"\n";
        cin>>s;
    }
}
