#include<iostream>
using namespace std;

int main()
{
    long int x,y,z,a,b,c,left;
    cin>>x>>y>>z>>a>>b>>c;

    if(x<=a && ((a-x)+b) >=y  && ((a+b+c)-(x+y))>=z)
    {

        cout<<"YES"<<endl;

    }
    else
        cout<<"NO"<<endl;
    return 0;
}
