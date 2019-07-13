#include<iostream>
using namespace std;
typedef long long int ll;

ll  ext_euclid(int a, int b,int *X,  int *Y)
{
    ll r2, r1,r,x2,x1,y1,y2,q,x,y;

    x2=1;
    x1 =0;
    y2=0;
    y1 =1;
    for(r2 =a, r1 =b; r1!=0; r2=r1,r1=r,x2=x1,x1=x,y2=y1,y1=y)
    {
        q = r2/r1;
        r = r2%r1;
        x = x2- (q*x1);
        y = y2-(q*y1);
        //cout<<q<<" "<<r<<" "<<x<<" "<<y<<" "<<r2<<endl;
    }
    *X = x2;
    *Y = y2;
    //cout<<r2<<endl;

    return r2;

}

int main()
{
    ll A,B,G;

    while(cin>>A>>B)
    {
        int P,Q;
        G =ext_euclid(A,B,&P,&Q);
        cout<<P<<" "<<Q<<" "<<G<<endl;

    }









    return 0;
}
