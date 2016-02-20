#include<bits/stdc++.h>
using namespace std;
int n,t,a[3*10005];
int visited[4*10005];
int dfs(int u)
{
    if(u>n)
    return 0;
    visited[u]=1;
    if(visited[u+a[u]]==0)
    dfs(u+a[u]);
}
int main()
{
    cin>>n>>t;
    for(int i=1;i<n;i++)
    cin>>a[i];
    dfs(1);
    if(visited[t])
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}
