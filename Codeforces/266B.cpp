#include<iostream>
using namespace std;

int main()
{

    string s;
    int n,x;
    cin>>n>>x;
    char q[2];

    cin>>s;

    for(int j =0; j<x; j++)
    {
        for(int i=1; i<=s.length()-1; i++)
        {
            if(s[i]== 'G' &&s[i-1]== 'B')
            {
                q[0]= s[i];
                s[i]= s[i-1];
                s[i-1]=q[0];
                i++;

            }

        }
    }

    cout<<s;







    return 0;
}
