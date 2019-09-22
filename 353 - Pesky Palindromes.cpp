#include<bits/stdc++.h>
using namespace std;
int pall(string c)
{
    for(int i=0; i<c.size()/2; i++)
    {
        if(c[i]!=c[c.size()-1-i])
            return 0;
    }
    return 1;
}
int main()
{
    string s;
    while(cin>>s)
    {
        map<string,int>mp;
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=1; j<=s.size(); j++)
            {
                string c=s.substr(i,j);
                if(mp[c]!=1)
                {
                    cnt+=pall(c);
                    mp[c]=1;
//                    cout<<c<<" "<<cnt<<endl;

                }
            }
        }
        cout<<"The string '"<<s<<"' contains "<<cnt<<" palindromes.\n";

        mp.clear();
    }
}

