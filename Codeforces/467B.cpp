#include<bits/stdc++.h>
using namespace std;

/*int convert(int x)
{
    int i=1,binary=0;
    while(x!=0)
    {
        binary=binary+(x%2)*i;
        i=i*10;
        x=x/2;

    }
    return binary;
}*/

int main()
{
    int n,m,k,a[1001],count =0,c,f=0;
    cin>>n>>m>>k;
    for(int i =0;i<=m;i++)
    {
        cin>>a[i];
        //cout<<convert(a[i])<<endl;
    }

    for(int i =0;i<m;i++)
    {
        count =0;
        c=a[m]^a[i];
        for(int j =1;j;j<<=1)
        {
            if(c&j)count++;
        }

        if(count<=k)f++;

       // cout<<a[i]<<"  "<<c<<" "<<count<<" "<<f<<endl;

    }

    cout<<f;
    /*c= a[m]^a[0];
    for(int i=1;i;i<<=1)
    {
        if(c&i)count++;
    }

    cout<<count;*/










    return 0;
}
