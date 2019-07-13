#include<iostream>
using namespace std;

long long get(long long n)
{
    for(long long int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return i;
    }
    return n;
}
int main()
{
    long long int n;
    long long cnt=0;
    cin>>n;


    if(n %2 != 0)
    {
        n=n-get(n);
        cnt++;
    }

    cout<<cnt+n/2<<endl;




    return 0;
}
