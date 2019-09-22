#include<bits/stdc++.h>
using namespace std;
struct r
{
    double x1;
    double y1;
    double x2;
    double y2;
} ;
int main()
{
    char s;
    struct r rec[10];
    int i=0,j=0,k=1;
    while(1)
    {
        cin>>s;
        if(s=='*')
            break;
        else if(s=='r')
        {
            cin>>rec[i].x1>>rec[i].y1>>rec[i].x2>>rec[i].y2;
            i++;
        }
    }

    while(1)
    {
        double x,y;
        bool flag=0;
        cin>>x>>y;
        if(x==9999.9&&y==9999.9)
            break;
        else
        {
            for(j=0; j<i; j++)
            {
                if((x>rec[j].x1&&x<rec[j].x2)&&(y<rec[j].y1&&y>rec[j].y2))
                {
                    printf("Point %d is contained in figure %d\n",k,j+1);
                    flag=1;
                }
            }
            if(flag==0)
            {
                printf("Point %d is not contained in any figure\n",k);

            }
            k++;


        }
    }
    return 0;
}

