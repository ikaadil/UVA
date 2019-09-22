#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    vector<int>v(3);
    while(t--)
    {
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        if(v[0]+v[1]>v[2])
            cout<<"OK\n";
        else
            cout<<"Wrong!!\n";


    }
}
