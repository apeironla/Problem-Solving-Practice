 #include<bits/stdc++.h>
using namespace std;

vector <int> a[1002];
bool visited[1002];

int dist[1002];
stack<int> s;
int v;

void dfs(int n)
{
    s.push(n);
    int top=s.top();
    visited[n]=true;
    while(!s.empty())
    {

        s.pop();

        for(int i =0;i<a[n].size();i++)
        {
            v=a[n][i];


                dist[v]=dist[n]+1;
                dfs(v);


        }
    }

}


int main()
{
    memset(visited,false,sizeof(visited));
    memset(dist,0,sizeof(dist));
    int n, x,y,q,res,ans;
    int temp = INT_MAX;
    cin>>n;
    for(int i =0;i<n-1;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);

    }
    dfs(1);
    cin>>q;
    for(int i =0;i<q;i++)
    {
        cin>>res;
        if(dist[res]<temp)
        {
            temp = dist[res];
            ans = res;
        }
        if(dist[res]==temp)
        {
            ans = min(ans,res);
        }
    }
    cout<<ans<<endl;







    return 0;
}
