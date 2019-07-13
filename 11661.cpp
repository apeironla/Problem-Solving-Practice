#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[2000001];
    int n,cnt,temp;
    char past;

    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>s;
        cnt=0;
        temp=99999999;
        past = ' ';

        for(int i =0;i<n;i++)
        {
            if(past=='D' && s[i]== 'R'){if(temp>cnt++)temp = cnt;cnt=0;past = s[i];}
            else if(past=='R' && s[i]== 'D'){if(temp>cnt++)temp = cnt;cnt=0;past = s[i];}
            else if(s[i]=='D' || s[i]=='R' && past == s[i])past = s[i];
            else if(s[i]=='.' && past != ' ')cnt++;
            else {
                   // cout<<s[i]<<" "<<i;
                past = ' ';
                cnt=0;
                //cout<<"hello"<<endl;
            }
        }

        if(temp == 99999999)
            temp=0;
        cout<<temp<<endl;
    }


    return 0;
}
