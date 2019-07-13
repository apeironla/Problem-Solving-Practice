#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int letter[26]={};

    for(int i =0;i<s.length();i++)
    {
        letter[s[i]-'a']++;
    }

    string ans;
    for(int i =0;i<26;i++)
    {
        if(letter[i]%n!=0)
        {
            cout<<"-1"<<endl;
            return 0;
        }

        ans = ans + string(letter[i]/n,i+'a');

    }
    while(n--)
		cout<<ans;
    cout<<endl;
    return 0;
}
