#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int b,p,res;
    int m;
    while(cin>>b>>p>>m)
    {
        res=1;
        b=b%m;
        while(p>0)
        {

            if(p&1)res=(res*b)%m;
            p=p>>1;
            b=(b*b)%m;

        }
        cout<<res<<endl;
    }




    return 0;
}
