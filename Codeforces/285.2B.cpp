#include<bits/stdc++.h>
using namespace std;
int visited[1005];
vector<int>g[1005];
map<string,int>a;
map<int,string>b;
int bfs(int u)
{
    queue<int>q;
    int cnt=0;
    visited[u]=1;
    q.push(u);
    while(!q.empty())
    {
        int n=q.front();
        q.pop();
        for(int i=0;i<g[n].size();i++)
        {
            int bn=g[n][i];
            if(visited[bn]==0)
            {
                cnt=bn;
                q.push(bn);
            }
        }
    }
   return cnt;
}
int main()
{
    int m;
    cin>>m;
    string s,sn;
    int cnt=1;
    for(int i=1;i<=m;i++)
    {
        int cn,cnl;
        cin>>s>>sn;
        if(a[s])
        {
            cn=a[s];
        }
        else
            {
            a[s]=cnt;
            b[cnt]=s;
            cn=cnt,cnt++;
            }
        if(a[sn])
        {
            cnl=a[sn];
        }
        else
        {
            a[sn]=cnt;
            b[cnt]=sn;
            cnl=cnt,cnt++;
        }
        g[cn].push_back(cnt);
    }
    for(int i=1;i<cnt;i++)
    {
        if(visited[i]==0)
        {
            int bn=bfs(i);
            if(bn)
            cout<<b[i]<<" "<<b[bn]<<endl;
        }
    }
}
