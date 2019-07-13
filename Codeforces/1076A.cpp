#include<iostream>
#include<string>
#include<algorithm>
#define MAX 200003
using namespace std;


int main()
{
    char ch[MAX],temp;
    string s;
    int n,pos;

    cin>>n>>ch;
    pos = n-1;
    for(int i =0;i<n-1;i++)
    {
        if(ch[i]>ch[i+1])
        {
            pos =i;
            break;
        }
    }

    for(int i =0;i<n;i++)
    {
        if(i!=pos)s+=ch[i];
    }
    cout<<s<<endl;




return 0;
}
