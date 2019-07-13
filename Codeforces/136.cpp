
#include<iostream>
#include<cmath>
#define MAX 5000
using namespace std;



int main()
{
    int count =1,n;
    for(int i =2; count!=1500; i++)
    {
        n=i;
        if(n % 2 == 0)
        {
            while(n % 2 ==0)
            {
                n= n/2;
            }
        }

        if(n % 3 == 0)
        {
            while(n % 3 ==0)
            {
                n= n/3;
            }
        }

        if(n % 5 == 0)
        {
            while(n % 5 ==0)
            {
                n= n/5;
            }
        }

        if(n==1)
        {
            count++;
            cout<<count<<" "<<i<<endl;
        }
    }





    return 0;
}
