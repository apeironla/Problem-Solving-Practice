#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int arr[1001],count=0,diff;
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i =1;i<n;i++)
    {
        diff=arr[i]-arr[i-1];
        //cout<<arr[i]<<" "<<arr[i-1]<<" "<<diff<<endl;
        if(diff!=1)count += (diff-1);
    }
    cout<<count<<endl;


    return 0;
}
