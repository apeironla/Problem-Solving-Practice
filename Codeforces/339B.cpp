
#include<iostream>
using namespace std;

int main()
{
    long long int n,m,a,res=1,count=0;


    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        if(a>res)
        {
            count=count+(a-res);
            res=a;
        }
        else if(a<res)
        {

           count= count+ n-res+a;

           res=a;
        }
    }

    cout<<count<<endl;



    return 0;
}
