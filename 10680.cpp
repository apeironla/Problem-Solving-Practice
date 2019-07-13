#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int GCD(int a , int b)
{
    if(b==0)return a;
    else return GCD(b,a%b);
}

int main()
{
    long int n,result;
    while(cin>>n && n != 0)
    {
        long int ans = 1;
        for(long int i =2;i<=n;i++)
        {
            ans = (ans* i)/GCD(ans,i);

        }
        stringstream ss;
        ss << ans;
        //cout<<ss<<endl;
        string str;
        ss >> str;
        int l= str.length()-1;


        for(int i=l;i>-1;i--)
        {
            if(str[i]!= '0')
            {
                cout<<str[i]<<endl;
                break;
            }
        }

    }



    return 0;
}
