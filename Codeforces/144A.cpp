#include<iostream>
using namespace std;

int main()
{

    int n, a[100];
    int min=200,max=-1,count =0,mina,maxa;

    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=min)
        {
            min=a[i];
            mina = i;
        }

        if(a[i]>max)
        {
            max=a[i];
            maxa=i;
        }


    }

     //cout<<min<<" "<<mina<<" "<<max<<" "<<maxa<<endl;
    if(maxa != 0)
    {
        count = maxa-0;

    }

    if(mina!= n-1)
        {
            if(mina>maxa)count = count + (n-1-mina);
            else count = count + (n-2-mina);
        }

    cout<<count;





    return 0;
}
