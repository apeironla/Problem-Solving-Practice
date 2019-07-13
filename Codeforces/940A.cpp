#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,a[101],x,count;
    cin>>n>>d;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];

    }
    int p=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        count =1;
        x=a[i]+d;
        for(int j = i+1;a[j]<=x &&j<n;j++)
        {
            count++;
        }
        if(count>p)p=count;


    }
    cout<<n-p<<endl;


    return 0;
}
