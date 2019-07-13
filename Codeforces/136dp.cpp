#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int store;
    long int ugly[1500];
    ugly[0]=1;
    long int x2 =2, x3=3,x5=5;
    int id2 =0,id3=0,id5=0;


    for(int i =1; i<1500; i++)
    {
        store= min(x2,min(x3,x5));
        //cout<<store<<endl;
        ugly[i]=store;
        if(store == x2)
        {
            id2++;
            x2 = ugly[id2]*2;
        }
        if(store == x3)
        {
            id3++;
            x3=ugly[id3]*3;
        }
        if(store == x5)
        {
            id5++;
            x5=ugly[id5]*5;
        }

    }
    cout<<"The 1500'th ugly number is "<<store<<"."<<endl;







    return 0;
}
