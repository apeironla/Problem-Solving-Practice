#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,k,a,b;
    unsigned long long int cost=0;

    cin>>n;

    cin>>k;

    cin>>a;

    cin>>b;

    while(n!=1)
    {
        if(n%k!=0)
        {
            n=n-1;
            cost=cost+a;
        }
        else
        {
            if((n-1)*a < b)
            {
                n=n-1;
                cost=cost+a;
            }
            else
            {
                n=n/k;
                cost=cost+b;
            }
        }
    }
    cout<<cost<<endl;



    return 0;
}
