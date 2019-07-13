#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long int n,k,c=0,j=0;
    int a[200001];

    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    c=1;
    while(c!=n)
    {
        while(a[c]>a[j] && a[c]<=a[j]+k)
        {
            n--;
            j++;
            c++;
            cout<<n<<" "<<c<<" "<<j<<endl;

        }
        c++;
        j++;

        cout<<a[c]<<" "<<a[j]<<endl;
    }
    cout<<n<<endl;


    return 0;

}
