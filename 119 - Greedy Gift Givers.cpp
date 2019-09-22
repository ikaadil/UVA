#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int flag=0;
    while(cin>>n)
    {
        string s[n];
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            mp[s[i]]=0;
        }

        for(int i=0;i<n;i++)
        {
            string s1;
            cin>>s1;
            int give,number;
            cin>>give>>number;
//            mp[s1]+=give%number;
           for(int j=0;j<number;j++)
            {
                string s2;
                cin>>s2;

                mp[s2]+=give/number;
                mp[s1]-=give/number;
            }
        }
        if(flag==1)
        cout<<"\n";
        flag=1;

        for(int i=0;i<n;i++)
        {
            cout<<s[i]<<" "<<mp[s[i]]<<"\n";
        }
        mp.clear();

    }

}
