#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool isPrime(int n)
{
    int x = sqrt(n);
    for(int i =2;i<=x;i++)
    {
        if(n%i == 0)return false;
    }
    return true;
}

int main(){

    int a,b,n,count =0;
    bool arr[10001];
    for(int i =0;i<=10000;i++)
    {
        n=i*i + i + 41;
        if(isPrime(n))arr[i]=true;
        else arr[i]=false;
    }

    while(cin>>a>>b)
    {
        count=0;
        for(int i = a;i<=b;i++)
        {
            if(arr[i]==true)
            {
               // cout<<i<<" ";
                count++;
            }
        }
        cout<<fixed;
        cout<<setprecision(2)<<(double)(count*100)/(b-a+1)+1e-9<<endl;


    }





return 0;
}
