#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(long int num)
{
    int sq = sqrt(num);
    for(int i =2;i<=sq;i++)
    {
        if(num%i == 0)return false;
    }

    return true;
}

int main()
{
    long int x;
    long int res,rem,div;
    while(cin>>x)
    {
        div =x;
        res=0;
        if(isPrime(x))
        {


            while(div !=0)
            {
                rem = div%10;
                div = div/10;

                res = res*10 + rem;
                 //cout<<div << " "<< rem<< " "<<res<<endl;
            }


            if(isPrime(res))cout<<x<<" is emirp."<<endl;
            else cout<<x<<" is prime."<<endl;
        }
        else cout<<x<<" is not prime."<<endl;
    }



    return 0;
}
