#include<bits/stdc++.h>
#include<iostream>
#include<cstring>


using namespace std;

int main ()
{
    string s,t;
    int n,m;
    bool flag=true;
    cin>>n>>m;
    cin>>s>>t;
    size_t pos = s.find('*');
    if(n<m-1)
    {
        cout<<"No"<<endl;
        return 0;
    }

    for(int i =0; i<pos-1; i++)
    {
        if(s[i]==t[i])flag=true;
        else flag= false;
    }
    if(!flag)
    {
        cout<<"No"<<endl;
        return 0;
    }

    for(int count =1; count<n-pos+1; count++)
    {

        if(t[m-count]==s[n-count])flag=true;
        else flag= false;
    }
    if(!flag)
    {
        cout<<"No"<<endl;
        return 0;
    }
    else
    {
        for(int i = pos+1;i<n-pos+1;i++)
        {
            if(isalpha(t[i]) && islower(t[i]))flag=true;
            else flag= false;
        }
    }

    if(!flag)
    {
        cout<<"No"<<endl;

    }
    else
    {
        cout<<"yes"<<endl;
    }

    return 0;
}
