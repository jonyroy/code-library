#include<bits/stdc++.h>
using namespace std;
int n,a[305];
vector<int>G[305],rnt;
int vis[305];
void dfs(int u)
{
    vis[u]=1;
    rnt.push_back(u);
    for(int i=0;i<G[u].size();i++)
    {
        int k=G[u][i];
        if(vis[k]==0)
            dfs(k);
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='1')
            {
                G[i].push_back(j);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            vector<int>jony;
            sort(rnt.begin(),rnt.end());
            for(int j=0;j<rnt.size();j++)
            {
                jony.push_back(a[rnt[j]]);
            }
            sort(jony.begin(),jony.end());
            for(int j=0;j<rnt.size();j++)
            {
                a[rnt[j]]=jony[j];
            }
            rnt.clear();
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
