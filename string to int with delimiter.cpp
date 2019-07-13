#include<bits/stdc++.h>
using namespace std;


/*2. Put it in a stringstream and use getline() with a delimiter
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

template <class Container>
void split2(const std::string& str, Container& cont, char delim = ' ')
{
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim)) {
        cont.push_back(token);
    }
}*/
vector <int> store;

void split_by_delim(string &s, char delim = '.')
{
    stringstream ss(s);
    string token;
    int n;
    while(getline(ss,token,delim))
    {
        stringstream temp(token);
        temp>>n;
        store.push_back(n);

    }
}

int main()
{
    string str;
    cin>>str;
    split_by_delim(str);
    for(int i =0;i<store.size();i++)
    cout<<store[i]<<" ";


    return 0;
}
