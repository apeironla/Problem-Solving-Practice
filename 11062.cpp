#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    set <string> box;
    string out="";

    while(getline(cin,input))
    {
        for(int i =0; i<=input.length(); i++)
        {
            input[i]=tolower(input[i]);
            if(isalpha(input[i]))
            {
                out+=input[i];
                //cout<<out<<endl;
            }
            else if(input[i]=='-')
            {
                if(input[i+1] != '\0')out+=input[i];
                else {
                    break;
                }

            }
            else
            {

                box.insert(out);
                out="";
            }


        }



    }
     set<string>::iterator it =box.begin();
     it++;
        for(;it!=box.end();++it)cout<<*it<<endl;




    return 0;
}
