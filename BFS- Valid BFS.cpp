#include<bits/stdc++.h>
using namespace std;
#define N 200000
#define F(i,a,b) for(int i = (int)a; i<(int)b;i++)
int n;
vector<int > grid[N];
bool used[N];
queue<int> q;

int main()
{
    cin>>n;
    string match;
    stringstream ss;
    vector<int> integeres;

    int a,b,x;
    memset(used,false,sizeof(used));
    q.push(1);
    used[1]=true;

    F(i,0,n-1)
    {
        cin>>a>>b;
        grid[a].push_back(b);
        grid[b].push_back(a);
    }
    cin.ignore();
    getline(cin,match);
    ss<<match;
    while(ss>>a)
        integeres.push_back(a);

    int next =1;
    while(!q.empty())
    {
        int x = q.front();
//        F(i,0,grid[x].size())cout<<grid[x][i]<<" ";
//        cout<<endl;
        //sort(grid[x].begin(),grid[x].end());
//        F(i,0,grid[x].size())cout<<grid[x][i]<<" ";
//        cout<<endl;
        //sort(integeres.begin()+next,integeres.begin()+next+grid[x].size());
//        vector<int> iterator x= integeres.begin();
//        vector<int> iterator y =integeres.begin()+grid[x].size();
//        x=next;
//        int y = next+grid[x].size();
//        F(i,x,y)cout<<integeres[i]<<" ";
        //break;
        F(i,0,grid[x].size())
        {

            if(integeres[next]==grid[x][i])
            {
                q.push(grid[x][i]);
                next++;

            }
//            else
//            {
//                cout<<"No"<<endl;
//                return 0;
//            }

        }
        q.pop();

    }
    if(integeres[n-1]==integeres[next-1])
        cout<<"YES";
    else
        cout<<"NO"<<endl;


    //F(i,0,integeres.size())cout<<integeres[i]<<endl;

//    while( ! q.empty())
//    {
//        x=q.front();
//        q.pop();
//        F(i,1,n)
//        {
//            F(j,0,grid[x].size())
//            {
//                if(integeres[i]==grid[x][j])
//                {
//                    i++;
//
//                }
//            }
//        }
//
//
//    }
    //F(i,0,grid[1].size())cout<<grid[1][i]<<endl;
//    int store,i =1;
//    while(!q.empty())
//    {
//        x = q.front();
//        q.pop();
//
//        //cout<<"Check: "<<i<<" "<<integeres[i]<<endl;
//        F(j,0,grid[x].size())
//        {
//
//            if(integeres[i]==grid[x][j])
//                {
//                    //cout<<integeres[i]<<" "<<grid[x][j]<<endl;
//                    //x=j;
//                    store=grid[x][j];
//                    q.push(grid[x][j]);
//                    i++;
//                    //cout<<"ctore"<<store<<endl;
//
//                }
//
//        }
//        //if(i==n-1)i--;
//
//
//    }
//    if(store==integeres[n-1])cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;

// following code is fine
//    while(!q.empty())
//    {
//        int x = q.front();
//        q.pop();
//        cout<<x<<" ";
//        F(i,0,grid[x].size())
//        {
//
//            int cur = grid[x][i];
//            if(!used[cur])
//            {
//                q.push(cur);
//                used[cur]=true;
//            }
//        }
//    }
//
//
//


    return 0;
}
