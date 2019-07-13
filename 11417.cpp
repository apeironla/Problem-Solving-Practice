#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    //cout<<a<<" "<<b<<endl;
    if(b==0)return a;
    else return GCD(b,a%b);

}

int main()
{
    int n,G=0 ;

    while(cin>>n && n != 0)
    {
        G=0;
        for(int i =1; i<n; i++)
        {
            for(int j =i+1; j<=n; j++)
            {
                G += GCD(i,j);
                //cout<<GCD(i,j);
            }
        }
        cout<<G<<endl;
    }






    return 0;
}
