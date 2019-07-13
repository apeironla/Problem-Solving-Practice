#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,pos;
    string s;

    cin>>n>>s;

    if(s.find("MM") != string::npos || s.find("YY") != string::npos || s.find("CC") != string::npos ||
       s.find("C?M") != string::npos || s.find("M?C") != string::npos || s.find("Y?C") != string::npos ||
       s.find("C?Y") != string::npos ||s.find("M?Y") != string::npos || s.find("Y?M") != string::npos
       )
    {
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;






    return 0;
}
