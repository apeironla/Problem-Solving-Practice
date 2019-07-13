#include<bits/stdc++.h>
using namespace std;
#define X 201
char a[X][X];
bool visited[X][X];
bool flag;

int di[]= {-1,-1,0,0,1,1};
int dj[]= {-1,0,-1,1,0,1};

void dfs(int x,int y,int n)
{
    //cout<<"a["<<x<<"]"<<"["<<y<<"] "<<a[x][y]<<" "<<n<<endl;
    if(x==n-1)
    {
        flag = true;
        return;
    }
    visited[x][y]=true;
    int I,J;
    for(int i =0; i<6; i++)
    {
        I = x+di[i];
        J = y+dj[i];
        if(I<n && I>=0 && J<n && J>=0 && ! visited[I][J])
        {
            if(a[I][J]== 'b')
            {
                dfs(I,J,n);
            }
        }
    }

    // return false;
}

int main()
{
    int n,tc=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(int i=0; i<n; i++)
        {
            for(int j =0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        flag=false;
        //cout<<flag<<endl;
        memset(visited,false,sizeof(visited));
        for(int i =0; i<n; i++)
        {
            if(a[0][i]=='b' &&!visited[0][i])
                dfs(0,i,n);
            if(flag)
            {
                cout<<tc<<" B"<<endl;

                tc++;
                break;
            }

        }
        if(!flag)
        {
            cout<<tc<<" W"<<endl;
            tc++;

        }

    }

}
