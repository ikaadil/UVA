#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    string s="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    string in;

    while(getline(cin,in))
    {
//    cout<<in;
//    for(int i=0;i<s.size();i++)
//    {
//       mp[s[i]]=i;
//    }
        for(int i=0; i<in.size(); i++)
        {
            if(in[i]==32)
                cout<<in[i];
            else
            {
                for(int j=0; j<s.size(); j++)
                {
                    if(s[j]==in[i])
                        cout<<s[j-1];
                }
            }
        }
        cout<<"\n";
    }
}
