#include<iostream>
#include<bits/stdc++.h>
using namespace std;

stack<char> st;
void anagram(string &source , string &pairs )
{
    for(int i =0;i<source.length();i++)
        {
            st.push(source[i]);
            cout<<st.top();
        }
}

int main()
{
    string source , pairs,temp;

    while(cin>>source>>pairs)
    {
        anagram(source,pairs);
    }



    return 0;
}
