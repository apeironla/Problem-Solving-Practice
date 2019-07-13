#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string s = "hello 233 uo 12";
    int found;
    stringstream ss;

    ss<<s;
    string temp;
    while(!ss.eof())
    {
        ss>>temp;//extracting word by word

        if(stringstream(temp)>> found)cout<<found<< " "<<endl;
        //temp = "";

    }



    return 0;
}
