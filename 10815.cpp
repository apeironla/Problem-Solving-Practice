#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000

int main()
{
    set<string> s;
    string ch;
    string in,a;

    while(cin>>ch)
    {
        in="";
        for(int i =0; i<=ch.length(); i++)
        {

            ch[i]=tolower(ch[i]);
            if(isalpha(ch[i]))
            {
                a=ch[i];
                in+=ch[i];
            }
        }
        else
        {
            if(ch[i] != ' ')s.insert(in);
            in="";
        }

    }
    if(in !="" && in != " ")
        s.insert(in);



}
set<string>::iterator it = s.begin();
++it;
for(; it !=s.end(); ++it)cout<<*it<<'\n';


return 0;
}
