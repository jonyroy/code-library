#include<bits/stdc++.h>
using namespace std;
string s[105];
int n,m;
int fx[]={-1,0,1,0};
int fy[]={0,1,0,-1};
void dfs(int u,int v)
{
   bool t=false,r=false;
   for(int i=0;i<4;i++)
   {
      int h=u+fx[i];
      int k=v+fy[i];
      if(h>=0&&h<n&&k>=0&&k<m)
       {
         if(s[h][k]=='W')
         t=true;
         if(s[h][k]=='B')
         r=true;
       }
    }
    if(t)
    s[u][v]='B';
    else if(r)
    s[u][v]='W';
    else
    s[u][v]='B';
    for(int i=0;i<4;i++)
    {
      int h=u+fx[i];
      int k=v+fy[i];
      if(h>=0&&h<n&&k>=0&&k<m&&s[h][k]=='.')
       {
           dfs(h,k);
       }
     }
}
int main()
{

    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.')
                dfs(i,j);
        }
    }
    for(int i=0;i<n;i++)
        cout<<s[i]<<endl;
    return 0;
}
