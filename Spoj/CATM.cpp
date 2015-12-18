/*
  Created By Jony Roy
  Date:20-01-2016
  Accepted
*/
#include<bits/stdc++.h>
using namespace std;
int fx[]= {-1,0,1,0};
int fy[]= {0,1,0,-1};
int Row,Column;
int breadthFirstSearch(int diStance[][105],int x,int y)
{
    int viSitedVertex[105][105]= {0};
    queue<pair<int,int> > qPoint;
    qPoint.push(make_pair(x,y));
    viSitedVertex[x][y]=1;
    while(!qPoint.empty())
    {
        pair<int,int> Point;
        Point=qPoint.front();
        qPoint.pop();
        int xCordinate,yCordinate;
        xCordinate=Point.first;
        yCordinate=Point.second;
        for(int i=0; i<4; i++)
        {
            int xx=xCordinate+fx[i];
            int yy=yCordinate+fy[i];
            if(viSitedVertex[xx][yy]==0&&xx>=1&&xx<=Row&&yy>=1&&yy<=Column)
            {
                viSitedVertex[xx][yy]=1;
                diStance[xx][yy]=diStance[xCordinate][yCordinate]+1;
                qPoint.push(make_pair(xx,yy));
            }
        }
    }
    return 0;
}
int main()
{
    cin>>Row>>Column;
    int qUery;
    cin>>qUery;
    for(int i=1; i<=qUery; i++)
    {
        int mouseX,mouseY,catX,catY,cat1X,cat1Y;
        int mdiStance[105][105]= {0};
        int fCdiStance[105][105]= {0};
        int sCdiStance[105][105]= {0};
        cin>>mouseX>>mouseY>>catX>>catY>>cat1X>>cat1Y;
        breadthFirstSearch(mdiStance,mouseX,mouseY);
        breadthFirstSearch(fCdiStance,catX,catY);
        breadthFirstSearch(sCdiStance,cat1X,cat1Y);
        int yes=0;
        for(int j=1; j<=Row; j++)
        {
                int miniMum=min(fCdiStance[j][1], sCdiStance[j][1]);

                if(miniMum > mdiStance[j][1])
                    yes=1;

                    miniMum=min(fCdiStance[j][Column],sCdiStance[j][Column]);
                if(miniMum > mdiStance[j][Column])
                    yes=1;
        }
        for(int j=1; j<=Column; j++)
        {
            int miniMum=min(fCdiStance[1][j],sCdiStance[1][j]);
                if(miniMum > mdiStance[1][j])
                    yes=1;
            miniMum=min(fCdiStance[Row][j],sCdiStance[Row][j]);
                if(miniMum > mdiStance[Row][j])
                    yes=1;
        }
        if(yes)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
