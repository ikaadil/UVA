
#include<bits/stdc++.h>
using namespace std;

vector<long long int> v[1005];

void result()
{
    v[0].push_back(1);
    v[1].push_back(1);
    int carry=0;

    for(int i=2;i<1001;i++)
    {
        int t=v[i-1].size();

        long long int s;

        for(int j=0;j<t;j++)
        {
            s=v[i-1][j]*i+carry;

            if(s>=10)
            {
                v[i].push_back(s%10);
                carry=s/10;
            }
            else
            {
                v[i].push_back(s);
                carry=0;
            }

        }

        if(carry>0)
        {
            while(carry!=0)
            {
                v[i].push_back(carry%10);
                carry=carry/10;
            }
        }
    }

}

int main()
{
    result();

    int n;

    while(cin>>n)
    {

        long long int s=0;

        for(int i=0;i<v[n].size();i++)
        {
            s=s+v[n][i];
        }

       cout<<s<<endl;
    }

    return 0;
}
