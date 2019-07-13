#include<iostream>
#include<string>
using namespace std;
 //diving a large number by 17
int main()
{
    string a;
    a= "34";
    int n=0;
    for(int i =0;i<a.size();i++)
    {
        n=n*10+(a[i]-'0');
        n=n%17;
    }
    if(n==0)cout<<"divisible";
    else cout<<"not";


    return 0;
}
