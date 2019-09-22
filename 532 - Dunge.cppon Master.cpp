#include<bits/stdc++.h>
using namespace std;
#define n 32
int x[6]= {0,0,1,-1,0,0};
int y[6]= {0,1,0,0,-1,0};
int z[6]= {1,0,0,0,0,-1};
char s[n][n][n];
int level[n][n][n];
int a1,b1,c1,a2,b2,c2;
int l,r,c;
void bfs(int a1,int b1,int c1)
{
    memset(level,-1,sizeof(level));
    queue<int>q;
    q.push(a1);
    q.push(b1);
    q.push(c1);
    level[a1][b1][c1]=0;
    while(!q.empty())
    {
        int a3,b3,c3,a4,b4,c4;
        a3=q.front();
        q.pop();
        b3=q.front();
        q.pop();
        c3=q.front();
        q.pop();
        for(int i=0; i<6; i++)
        {
            a4=a3+x[i];
            b4=a3+y[i];
            c4=c3+z[i];
            if(a4>=0&&a4<l&&b4>=0&&b4<r&&c4>=0&&c4<c&&s[a4][b4][c4]=='.'&&level[a4][b4][c4]==-1)
            {
                level[a4][b4][c4]=level[a3][b3][c3]+1;
                q.push(a4);
                q.push(b4);
                q.push(c4);
            }

        }
    }
    return ;
}
int main()
{
    while(cin>>l>>r>>c&&(l+r+c)!=0)
    {
        for(int i=0; i<l; i++)
        {
            for(int j=0; j<r; j++)
            {
                for(int k=0; k<c; k++)
                {

                    cin>>s[i][j][k];
                    if(s[i][j][k]=='S')
                    {
                        a1=i;
                        b1=j;
                        c1=k;
                    }
                    else if(s[i][j][k]=='E')
                    {
                        a2=i;
                        b2=j;
                        c2=k;
                        s[a2][b2][c2]='.';
                    }
                }
                   getchar();
            }
               getchar();
        }
        cout<<a1<<" "<<b1<<" "<<c1<<endl;
        cout<<a2<<" "<<b2<<" "<<c2<<endl;
        bfs(a1,b1,c1);
        if(level[a2][b2][c2]==-1)
            cout<<"Trapped!\n";
        else
            cout<<"Escaped in "<<level[a2][b2][c2]<<"minute(s).\n";
    }
}
