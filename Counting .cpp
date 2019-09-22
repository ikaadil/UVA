#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("output.txt","w",stdout);

    unsigned long long M[1001];

    M[1]=2;
    M[2]=5,M[3]=13;

    for(int i=4; i<1001; i++)
        M[i]=2*M[i-1]+M[i-2]+M[i-3];

    int n;

    while(cin>>n) cout<<M[n]<<endl;

    return 0;
}
