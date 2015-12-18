/*
 Created By Jony Roy
 Date:19-01-2016
*/
#include<bits/stdc++.h>
#define M 100
using namespace std;
int fx[]={-1,0,1,0};
int fy[]={0,1,0,-1};
int w,h;
string a[M];
int bfs(int x,int y,int &r1,int &r2)
{
   int v[M][M]={0};
   queue< pair<int,int> > q;
   q.push(make_pair(x,y));
   v[x][y]=1;
   int d[M][M]={0};
   while(!q.empty())
   {
       pair<int,int> p;
       p=q.front();
       int xx,yy;
       xx=p.first;
       yy=p.second;
       q.pop();
       for(int i=0;i<4;i++)
       {
          int fa=xx+fx[i];
          int fb=yy+fy[i];
          if(v[fa][fb] == 0 && (fa >= 0 && fa < h) && (fb >= 0 && fb < w))
          {
             if(a[fa][fb]=='*')
             {
                 d[fa][fb]=d[xx][yy]+1;
                 a[fa][fb]='.';
                 r1=fa;
                 r2=fb;
                 return d[fa][fb];
             }
             else if(a[fa][fb] == '.')
             {
                d[fa][fb]=d[xx][yy]+1;
                q.push(make_pair(fa,fb));
                v[fa][fb]=1;
             }
          }
       }
   }
   return 0;
}
int main()
{

    while(cin>>w>>h)
    {
        if(w+h==0)
            break;
        int x=0,y=0;
        int cnt=0;
        for(int i=0;i<h;i++)
        {
            cin>>a[i];
            for(int j=0;j<w;j++)
            {
                if(a[i][j]=='*')
                    cnt++;
                if(a[i][j]=='o')
                    x=i,y=j;
            }
        }
        int cntxx=0,t=0;
        for(int i=1;i<=cnt;i++)
        {
            int r1,r2;
            r1=-1;
            r2=-1;
            if(x>=0&&y>=0)
            {
              int jon=bfs(x,y,r1,r2);
              cntxx+=jon;
              if(jon==0)
              {
                  t=1;
                  break;
              }
              x=r1;
              y=r2;
            }
            else
            {
               t=1;
               break;
            }
        }
        if(t==0)
            cout<<cntxx<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
