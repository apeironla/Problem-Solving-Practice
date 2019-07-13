#include<bits/stdc++.h>
using  namespace std;
#define X 101

char a[X][X];
bool visited[X][X];
int cnt;
int di[]={-1,1,-1,0,0,1,1,-1};
int dj[]={-1,1,0,-1,1,0,-1,1};
int I,J;



void DFS(int x, int y,int n,int m)
{

    for(int i =0;i<8;i++)
    {
        I = x+di[i];
        J = y+dj[i];
        if(I<n && I>=0 && J<m && J>=0 && !visited[I][J])
        {
            visited[I][J]=true;
            if(a[I][J]=='@')DFS(I,J,n,m);
        }

    }
}


int main()
{
    int n ,m;

    while(cin>>n>>m)
    {
        if(n==0 && m==0)break;

        memset(visited,false,sizeof(visited));
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                cin>>a[i][j];

            }
        }
        int cnt =0;

        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(!visited[i][j])
                {
                    visited[i][j]=true;
                    if(a[i][j]=='@')
                    {
                        cnt++;
                        DFS(i,j,n,m);
                    }
                }
            }
        }

        cout<<cnt<<endl;

    }

    return 0;
}
