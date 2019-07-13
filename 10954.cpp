#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int> > pq;
    int n,x;
    long long int sum,store;
    while(cin>>n)
    {
        sum =0;
        store=0;
        if(n==0)break;
        for(int i =0;i<n;i++)
        {
            cin>>x;
            pq.push(x);

        }

        sum = pq.top();
        pq.pop();
        while(!pq.empty())
        {
            sum+=pq.top();
            store += sum;
            cout<<sum<<" "<<store<<endl;

            pq.pop();

        }

        cout<<store<<endl;

    }


    return 0;
}
