//uva 10305

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define SIZE 105

int n;
stack<int> s;
stack<int> visited;
bool visi[SIZE];
int graph[SIZE][SIZE];


void topology(int x)
{
    visi[x] = true;
    visited.push(x);
    int top = visited.top();
    //cout<<top<<endl;

    while(!visited.empty())
    {
        for(int j =1;j<=n;j++)
        {
            if(!visi[j] && graph[top][j]==1)topology(j);


        }
        s.push(visited.top());
        visited.pop();
        return;
    }
}

int main()
{
    int m,x,y;
    while(cin>>n>>m)
    {
        memset(visi,false,sizeof(visi));
        if(n==0 && m==0)break;
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            graph[x][y]=1;

        }
        for(int i =1;i<=n;i++ )
        {
            if(!visi[i])topology(i);
        }

        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;


    }



    return 0;
}
