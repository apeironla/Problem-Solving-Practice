#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[10000],sum=0,gcd,b,a;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i =0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            a=arr[i];
            b=arr[j];
            //if(a==0)sum=a[j];
            while(a!=0)
            {
                gcd=a;
                a = b%a;
                b=gcd;



            }
            sum = sum+b;
            cout<<arr[i]<<" "<<arr[j]<<" "<<b<<" "<<sum<<endl;



        }
    }

    cout<<sum<<endl;

    return 0;

}
