#include<bits/stdc++.h>
using namespace std;
vector<int> verTex[1000];
int d[1000];
int depthFirstSearch(int n)
{
    stack<int> q;
    int viSitedNode[10000]={0};
    viSitedNode[n]=1;
    q.push(n);
    int time=0;
    d[n]=0;
    while(!q.empty())
    {
        int currentNode=q.top();
        q.pop();
        int len=verTex[currentNode].size();
        for(int i=0;i<len;i++)
        {
            int v=verTex[currentNode][i];
            if(viSitedNode[v]==0)
            {
                viSitedNode[v]=1;
                parent[v]=currentNode;
                d[v]=(++time);
            }
        }
        f[]
    }
}
int main()
{
    int v,edge;
    cin>>v>>edge;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        verTex[x].push_back(y);
        verTex[y].push_back(x);
    }
    int source,deStination;
    cout<<"Enter Source And Destination=";
    cin>>source>>deStination;
    depthFirstSearch(source);
    return 0;
}
