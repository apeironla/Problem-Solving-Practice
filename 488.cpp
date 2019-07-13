#include<iostream>
using namespace std;

int  arr[]= {1,11,111,1111,11111,111111,1111111,11111111,111111111};
void print(int a, int f)
{
    for(int i =0; i<f; i++)
    {
        for(int j =1; j<=a; j++)
        {
            cout<<arr[j-1]*j<<endl;

        }

        for(int j =a-1; j>0; j--)
        {
            cout<<arr[j-1]*j<<endl;
        }

        if(i==f-1)continue;
        cout<<endl;
    }
}
int main()
{
    int t,a,f;
    cin>>t;


    for(int i =0; i<t; i++)
    {
        cin>>a;

        cin>>f;

        print(a,f);

        if(i==t-1)continue;
        cout<<endl;


    }



    return 0;
}

