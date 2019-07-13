#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

void bangla(long long int n)
{
    if(n>=10000000)
    {
        bangla(n/10000000);
        cout<<" kuti";
        n=n%10000000;
    }
    if(n>=100000)
    {
        bangla(n/100000);
        cout<<" lakh";
        n=n%100000;
    }
    if(n>=1000)
    {
        bangla(n/1000);
        cout<<" hajar";
        n=n%1000;
    }
    if(n>=100)
    {
        bangla(n/100);
        cout<<" shata";
        n=n%100;
    }
    if(n)
        cout<<" "<<n;
}
int main()
{
    long long int n;
    int cas =0;
    while(cin>>n)
    {
        cas++;
        printf("%4d.",cas);
       // cout<<cas<<".";
        if(n==0)
        {
            cout<<" 0"<<endl;
            continue;
        }
        bangla(n);
        cout<<endl;



    }



    return 0;
}
