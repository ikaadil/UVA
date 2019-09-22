#include  <iostream>
#include  <cstdio>
#include  <cmath>
#include  <cstring>
using  namespace std ;

const  int N = 805 ;
const  int M = 1000000 ;
int f [ N ][ N ]; //first dimension Is n, the second dimension is the number of stored, every 6 digits

void  my_way () // table
{
    int t ;
    memset ( f, 0, sizeof ( f ));
    f [2][0]=1;
    for (int i=3; i<N; i++)
    {
        t=0;
        for (int j=0; j<N; j++)
        {
            f[i][j]=(f[i-1][j]+f[i-2][j])*(i-1)+t;
            t=f[i][j]/M;
            f[i][j]=f[i][j]%M;
        }
    }
}

int main()
{
//freopen("out.txt","w",stdout);
    my_way();
    int n;
    while (~scanf("%d",&n))
    {
        if (n==-1) break;
        int i,j;
        for (i=N-1; i>=0; i--)
            if (f[n][i]!=0) break;
        printf("%d",f[n][i]);
        for (j=i-1; j>=0; j--)
            printf("%06d",f[n][j]);
        printf("\n");
    }
}
