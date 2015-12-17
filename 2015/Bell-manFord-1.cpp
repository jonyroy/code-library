#include<bits/stdc++.h>
using namespace std;
int node,edge,edge_u[1005],edge_v[1005],cost[1005],s,d,dist[1005],par[1005];
int PathPrint(int s)
{
    vector<int>a;
    while(s>-1)
    {
      a.push_back(s);
      s=par[s];
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
int main()
{

    cin>>node>>edge;
    for(int i=0;i<=1000;i++)
        dist[i]=1000000000;
    for(int i=1;i<=node;i++)
        cin>>edge_u[i]>>edge_v[i]>>cost[i];
    cin>>s>>d;//source and destination
    dist[s]=0;
    par[s]=-1;
    bool neg_cycle=false;
    for(int i=1;i<=node;i++)
    {
        bool updated=false;
        for(int j=1;j<=edge;j++)
        {
            int u=edge_u[j];
            int v=edge_v[j];
            if(dist[u]+cost[j]<dist[v])
            {
                dist[v]=dist[u]+cost[j];
                par[v]=u;
                updated=true;
                if(i==node)
                    neg_cycle=true;
            }
        }
        if(updated==false)
            break;
    }
    if(neg_cycle)
        cout<<"Negative Cycle Detected.\n";
    else{
        cout<<"Shortest Path="<<dist[d]<<endl;
        PathPrint(d);
    }
    return 0;
}
