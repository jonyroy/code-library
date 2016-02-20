#include<bits/stdc++.h>
using namespace std;
/*int visit[200005],dist[200005];
int BFS(int n,int m)
{
    queue<int> q;
    visit[n]=1;
    dist[n]=0;
    q.push(n);
    while(!q.empty())
    {
        int r=q.front();
        q.pop();
        int v=r-1;
        if(!visit[v]&&v>0)
        {
            visit[v]=1;
            dist[v]=dist[r]+1;
            q.push(v);
        }
        v=r*2;
        if(!visit[v]&&r<m)
        {
            visit[v]=1;
            dist[v]=dist[r]+1;
            q.push(v);
        }
    }
    return dist[m];
}*/
int cnt(int n,int m)
{
    if(n>=m)
        return n-m;
    else if(m&1)
        return cnt(n,(m+1)/2)+2;
    else
        return cnt(n,m/2)+1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<cnt(n,m);
    /*if(n>=m)
    {
        cout<<n-m;
    }
    else
        {
        while(n<m)
        {
            if(m&1)
            {
                m++;
                m=m/2;
                cnt+=2;
            }
            else
            {
                m=m/2;
                cnt++;
            }
        }
        cnt+=(n-m);
        cout<<cnt<<endl;
    }*/
       // cout<<BFS(n,m);
    return 0;
}
