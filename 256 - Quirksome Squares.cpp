#include <bits/stdc++.h>
#define sc(a) scanf("%d",&a)
#define scd(a,b) scanf("%d %d",&a,&b);

using namespace std;
void digit2();
void digit4();
void digit6();
void digit8();

int main()
{
    // freopen("in.txt","r",stdin);
    int digit ;
    while(~ sc(digit))
    {
        if(digit==2) digit2();
        if(digit==4) digit4();
        if(digit==6) digit6();
        if(digit==8) digit8();

    }

    return 0;
}
void digit2()
{


    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(((i+j)*(i+j))== ((i*10)+j)) cout<<i<<j<<endl;
        }
    }
}

void digit4()
{

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                for(int l=0; l<10; l++)
                {
                    int s=((i*10)+j)+((k*10)+l);
                    int x=(i*1000)+(j*100)+(k*10)+l;
                    if(s*s==x)cout<<i<<j<<k<<l<<endl;
                }
            }
        }
    }




}
void digit6()
{

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                for(int l=0; l<10; l++)
                {
                    for(int m=0; m<10; m++)
                    {
                        for(int n=0; n<10; n++)
                        {
                            int x=(((i*100)+(j*10)+k) +((l*100)+(m*10)+n));
                            int s=(i*100000)+(j*10000)+(k*1000)+(l*100)+(m*10)+n;
                            if(x*x==s)cout<<i<<j<<k<<l<<m<<n<<endl;
                        }
                    }
                }
            }
        }
    }



}

void digit8()
{

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                for(int l=0; l<10; l++)
                {
                    for(int m=0; m<10; m++)
                    {
                        for(int n=0; n<10; n++)
                        {
                            for(int o=0; o<10; o++)
                            {
                                for(int p=0; p<10; p++)
                                {
                                    int x=(((i*1000)+(j*100)+(k*10)+l) +((m*1000)+(n*100)+(o*10)+p));
                                    int s=(i*10000000)+(j*1000000)+(k*100000)+(l*10000)+(m*1000)+(n*100)+(o*10)+p;
                                    if(x*x==s)cout<<i<<j<<k<<l<<m<<n<<o<<p<<endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }



}
