#include<iostream>
using namespace std;

int main()
{
    long long int temp,max,min,q,r,half,res;
    long long int n,m;

    while(cin>>n>>m)
    {
        max=0; min =0;

        temp = n-(m-1);
        max = (temp*(temp-1))/2;
        q = n/m;
        r=n%m;

        if(r !=0)
        {
            if(q==1)half = r;
          else half = r* ((q*(q+1))/2);
          min = half+ ((m-r)*((q*(q-1))/2));
        }
        else {
            if(q==2)min = m;
            else if(q>2)min=m*((q*(q-1))/2);
        }

        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
