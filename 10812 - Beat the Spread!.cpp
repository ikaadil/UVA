#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x+y<0||x-y<0||(x-y)%2||(x+y)%2)
        {

            cout<<"impossible\n";
        }
        else
            cout<<(x+y)/2<<" "<<(x-y)/2<<"\n";
    }
}
