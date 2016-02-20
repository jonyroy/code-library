#include<bits/stdc++.h>
#define PII pair<int,pair<int,int> >
#define PI pair<pair<int,int>,int >
using namespace std;
int main()
{
    int node,edge,visited[1000]= {0},MstSum=0;
    priority_queue<PII,vector<PII>,greater<PII> >q;
    vector<int>G[1000],cost[1000];
    vector<PI>mst;
    cin>>node>>edge;
    for(int i=1; i<=edge; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        G[a].push_back(b);
        G[b].push_back(a);
        cost[a].push_back(c);
        cost[b].push_back(c);
    }
    int n=1;
    for(int j=1;j<node;j++)
    {
        visited[n]=1;
        for(int i=0; i<G[n].size(); i++)
        {
            PII cnt;
            cnt.first=cost[n][i];
            cnt.second.first=n;
            cnt.second.second=G[n][i];
            if(visited[cnt.second.second]==0)
            q.push(cnt);
        }
        while(!q.empty())
        {
            PII cnt=q.top();
            if(visited[cnt.second.second]==0)
            {
                mst.push_back(make_pair(make_pair(cnt.second.first,cnt.second.second),cnt.first));
                MstSum+=cnt.first;
                n=cnt.second.second;
                visited[cnt.second.second]=1;
                q.pop();
                break;
            }
            else
            q.pop();
        }
    }
    cout<<endl;
    for(int i=0;i<mst.size();i++)
    cout<<mst[i].first.first<<" "<<mst[i].first.second<<" "<<mst[i].second<<endl;
    cout<<endl;
    cout<<"MST Sum="<<MstSum<<endl;
    return 0;
}
