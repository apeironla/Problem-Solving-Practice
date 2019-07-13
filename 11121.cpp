#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string tostring(int n)
{
    string str;
    stringstream ss;
    ss<<n;
    ss>>str;
    return str;
}
int main()
{
    int tc,cas=1;
    cin>>tc;
    string s;
    long long int x,remainder=0,quotient;
    while(tc!=0)
    {
        s="";
        cin>>x;
        if(x==0)s ="0";
        while(x!=0)
        {
            remainder = x%-2;
            x=x/-2;
            if(remainder<0)
            {
                remainder+=2;
                x++;
            }
            s = tostring(remainder)+s;
        }

        tc--;
        cout<<"Case #"<<cas<<": "<<s<<endl;
        cas++;

    }
// to find neg base
//when remainder is negative
// add 1 to the quotient
// and add absolute of negbase to the remainder

    return 0;
}
