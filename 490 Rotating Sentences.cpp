#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str[105];

    int p=0,best_len=0;

    while(getline(cin,str[p]))
    {
        if(str[p].length()>best_len)
        {
            best_len = str[p].length();
        }
        p++;
    }

    for(int i=0;i<best_len;i++)
    {
        for(int j=p-1;j>=0;j--)
        {
            if(str[j].length()>i)
            {
                cout<<str[j][i];
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
