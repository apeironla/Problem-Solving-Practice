#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch;
    bool found;
    int sum,temp;
    while(cin>>s)
    {
        sum=0;
        temp = -1;
        found=false;
        for(int i =0; i<s.length(); i++)
        {
            if(i==0&&!isalnum(s[i]))continue;
            if(s[i]=='0')if(temp<=2)temp=2;
            ch = s[i];
            if(ch>= '0' && ch<='9' )
            {
                sum+=ch-'0';
                if(temp<= ch-'0')
                    temp = ch-'0'+1;
            }
            else if(ch>='A' && ch<='Z')
            {
                sum+=ch-'A'+10;
                if(temp<= ch-'A'+10)
                    temp = ch-'A'+10+1;
            }
            else
            {
                sum+=ch-'a'+36;
                if(temp<= ch-'a'+36)
                    temp = ch-'a'+36+1;

            }
           // cout<<sum<<" "<<temp<<endl;

        }

        for(int i =temp; i<=62; i++)
        {
            if(sum % (i -1)==0)
            {
                found = true;
                cout<<i<<endl;
                break;
            }
        }
        if(found==false)cout<<"such number is impossible!"<<endl;

    }
}
