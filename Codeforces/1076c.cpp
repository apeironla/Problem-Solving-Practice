#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc,d;
    double a,b,temp;
    cin>>tc;
    while(tc!=0)
    {
        cin>>d;
        if(d<4 && d>0)
        {
            cout<<"N"<<endl;
            tc--;
            continue;
        }
        b = (d+ sqrt(d*d-(4*d)))/2;
        a= d-b;
        cout<<fixed<<setprecision(9);
        cout<<"Y "<<b<<" "<<a<<endl;
        tc--;
    }



    return 0;
}
