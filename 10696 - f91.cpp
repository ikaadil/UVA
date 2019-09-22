#include<bits/stdc++.h>
using namespace std;
int f1(int n)
{
    if(n>=101)
        return n-10;
//    else if(n<101)
//        return 91;
    else
    {
        int x=f1(n+11);
        return f1(x);
    }
}
int main()
{
    int n;

    while(cin>>n&&n)
    {
       printf("f91(%d) = %d\n",n,f1(n));
    }
}
