#include<iostream>
#include<string>

using namespace std;


int main()
{
    long long int x,temp;
    int count ;
    string s;
    while(cin>>x)
    {
        temp=x;
        s="";
        count =0;
        if(x==0)
            break;
        while(x!=0)
        {
            if(x&1)
            {
                s.insert(0,1,'1');
                count++;
            }
            else s.insert(0,1,'0');;
            x= x>>1;
            //cout<<x<<endl;

        }
        cout<< "The parity of "<<s<<" is "<<count<<" (mod 2)."<<endl;

    }
    return 0;
}
