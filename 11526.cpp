#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int n, res = 0;
    while(t>0)
    {
        cin>>n;
        res=0;
        for( int i = 1; i <= n; i=i+1 )
        {
            res = (res + n/i);
        }

        cout<<res<<endl;

    }





    return 0;
}
