#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge,edge_u[1000],edge_v[1000],cost[1000],s,dist[1000],d;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
        cin>>edge_u[i]>>edge_v[i]>>cost[i];
    for(int i=1;i<1000;i++)
        dist[i]=1000000000;
    cin>>s>>d;
    dist[s]=0;
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
                updated=true;
                if(i==node)
                {
                    neg_cycle=true;
                }
            }
        }
    }
    if(neg_cycle)
    {
        cout<<"Negative Cycle Detected.\n";
    }
    else
        cout<<dist[d]<<endl;
    return 0;
}
