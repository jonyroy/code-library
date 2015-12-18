#include<bits/stdc++.h>
using namespace std;
int rowConvert[]={0,8,7,6,5,4,3,2,1};
int columnConvert[]={0,1,2,3,4,5,6,7,8};
int fx[]={-2,-2,-1,1,2,2,1,-1};
int fy[]={-1,1,2,2,1,-1,-2,-2};
int breadthFirstSearch(int sRow,int sColumn,int dRow,int dColumn)
{
    int visitedPoint[10][10]={0};
    int diStance[10][10]={0};
    queue<pair<int,int> >qPoint;
    qPoint.push(make_pair(sRow,sColumn));
    visitedPoint[sRow][sColumn]=1;
    diStance[sRow][sColumn]=0;
    while(!qPoint.empty())
    {
        pair<int,int> Point;
        Point=qPoint.front();
        qPoint.pop();
        int x=Point.first;
        int y=Point.second;
        for(int i=0;i<8;i++)
        {
            int xx=x+fx[i];
            int yy=y+fy[i];
            if(visitedPoint[xx][yy]== 0 && (xx >=1 && xx <= 8) && (yy >=1 && yy <= 8))
            {
                qPoint.push(make_pair(xx,yy));
                visitedPoint[xx][yy]=1;
                diStance[xx][yy]=diStance[x][y]+1;
            }
        }
    }
    return diStance[dRow][dColumn];
}
int main()
{
    int testCase,sRow,dRow,sColumn,dColumn;
    cin>>testCase;
    for(int i=1;i<=testCase;i++)
    {
        string souRce,desTination;
        cin>>souRce>>desTination;
        sRow=rowConvert[souRce[1]-48];
        sColumn=columnConvert[souRce[0]-96];
        dRow=rowConvert[desTination[1]-48];
        dColumn=columnConvert[desTination[0]-96];
        int receiveAnswer=breadthFirstSearch(sRow,sColumn,dRow,dColumn);
        cout<<receiveAnswer<<endl;
    }
    return 0;
}
