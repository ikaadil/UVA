#include<bits/stdc++.h>
using namespace std;
char s[101][101];
int n;
int a[102][102];


int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>s[i][j];
//            cout<<s[i][j];
        }
//        cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i][j]=='.'&&j+k-1<n)
            {
                int flag=0;
                for(int p=0; p<k; p++)
                {
                    if(s[i][j+p]=='#')
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    for(int p=0; p<k; p++)
                        a[i][j+p]++;

                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i][j]=='.'&&j+k-1<n)
            {
                int flag=0;
                for(int p=0; p<k; p++)
                {
                    if(s[j+p][i]=='#')
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    for(int p=0; p<k; p++)
                        a[j+p][i]++;

                }
            }
        }
    }


        int mn=0;
    int x=k,y=k;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]>=mn)
            {
                mn=a[i][j];
                x=i;
                y=j;
//                cout<<mn<<endl;
            }
        }
    }
    cout<<x<<" "<<y;


}
