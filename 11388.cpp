#include<iostream>
using namespace std;

int main()
{
    int G,L,t;
    cin>>t;

    for(int i =0; i<t; i++)
    {
        cin>>G>>L;
        if(L%G!=0)cout<<"-1"<<endl;
        else cout<<G<<" "<<L<<endl;

        }



    return 0;
}
