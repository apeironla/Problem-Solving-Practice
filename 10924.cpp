#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i =2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    string s;
    char ch;
    int sum;
    while(cin>>s)
    {
        sum=0;
        for(int i =0;i<s.length();i++)
        {
            ch=s[i];
            if(ch>='a' && ch<='z')sum+=ch-'a'+1;
            else sum+= ch - 'A'+27;

        }
        if(isPrime(sum))cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }



    return 0;
}
