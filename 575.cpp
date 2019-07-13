#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    stringstream ss;
    int n,res,count;
    while(cin>>x)
    {
        count=1;res=0;
        if(x=="0")break;
        int len=x.length();
        for(int i =len-1;i>=0;i--)
        {
            ss.clear();
            ss<<x[i];
            ss>>n;
            res = res+ n*(pow(2,count)-1);
            count++;

        }
        cout<<res<<endl;
    }



    return 0;
}
