#include<bits/stdc++.h>
using namespace std;
char check[300];
int pall(string c)
{
    for(int i=0; i<c.size()/2; i++)
    {
        if(c[i]!=c[c.size()-1-i])
            return 0;
    }
    return 1;
}
int mir(string s)
{
    string ne="";
    for(int i=0; i<s.size(); i++)
    {
//        if(check[s[i]])
            ne+=check[s[i]];
//            else if(s[i]=='0')return 0;
//        else ne+=s[i];

    }
//    cout<<s<<" "<<ne<<endl;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=ne[s.size()-1-i])
            return 0;
    }
    return 1;

}
int main()
{
    check['A']='A';
    check['E']='3';
    check['H']='H';
    check['I']='I';
    check['J']='L';
    check['L']='J';
    check['M']='M';
    check['O']='O';
    check['S']='2';
    check['T']='T';
    check['U']='U';
    check['V']='V';
    check['X']='X';
    check['Y']='Y';
    check['Z']='5';
    check['1']='1';
    check['2']='S';
    check['3']='E';
    check['5']='Z';
    check['8']='8';
    string s;
    while(cin>>s)
    {
//        for(int i=0; i<s.size(); i++)
//            s[i]=toupper(s[i]);
        if(pall(s)&&mir(s))
        {
            cout<<s<<" -- is a mirrored palindrome.\n";
        }
        else if(pall(s))
        {
            cout<<s<<" -- is a regular palindrome.\n";

        }
        else if(mir(s))
        {
            cout<<s<<" -- is a mirrored string.\n";
        }
        else
        {
            cout<<s<<" -- is not a palindrome.\n";

        }
        cout<<"\n";
    }

}
