#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    //regex b = "(|14|144)*";
    if(regex_match(s,regex("(1|14|144)*")))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}

/*

int n;
cin>>n;
if(n%1000==144)n/=1000;
else if(n%100==14)n/=100;
else if(n%10==1)n/=10;*/
