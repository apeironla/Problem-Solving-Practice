#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,op,value,cnt,count_push;
    bool boolstack,boolpriority,boolqueue;
    while(cin>>n)
    {
        stack<int> s;
        priority_queue<int> pq;
        queue<int>q;
        boolstack=1;
        boolpriority=1;
        boolqueue=1;
        cnt=3;
        count_push =0;
        for(int i =0; i<n; i++)
        {
            cin>>op>>value;
            if(op==1)
            {
                count_push++;
                s.push(value);
                pq.push(value);
                q.push(value);
                continue;
            }

            if(op==2 && count_push>0)
            {
                if(s.top()==value && boolstack==1)
                    s.pop();
                else if(boolstack==1)
                {
                    boolstack = 0;
                    cnt--;
                }

                if(pq.top()==value && boolpriority==1)
                {
                    pq.pop();

                }
                else if(boolpriority==1)
                {
                    boolpriority = 0;
                    cnt--;
                }

                if(q.front()==value && boolqueue==1)
                    q.pop();
                else if(boolqueue==1)
                {
                    boolqueue = 0;
                    cnt--;
                }

                count_push--;
                continue;
            }
            count_push--;




        }

        if((!boolstack && !boolpriority && !boolqueue) || count_push<0)
        {
            cout<<"impossible"<<endl;

        }
        else if(cnt>=2)
            cout<<"not sure"<<endl;
        else if(boolstack)
            cout<<"stack"<<endl;
        else if(boolpriority)
            cout<<"priority queue"<<endl;
        else
            cout<<"queue"<<endl;


    }



    return 0;
}
