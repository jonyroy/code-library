#include<bits/stdc++.h>
using namespace std;
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
int visited[55][55];
pair<int,int>p,visited[53][53];
int main()
{
    int n,m;
    string s[55];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    queue<pair<int,int> >q;
    q.push(make_pair(0,0));
    visited[]
    while(!q.empty())
    {
       p=q.front();
       q.pop();
       for(int i=0;i<4;i++)
       {
           int a=p.first+fx[i];
           int b=p.second+fy[i];
           if(a>=0&&a<n&&b>=0&&b<m&&s[p.first][p.second]==s[a][b])
           {
              if(visited)
           }
       }
    }
    return 0;
}
