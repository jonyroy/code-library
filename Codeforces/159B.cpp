#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
using namespace std;
int c[1005][1005],cc[1005][1005],fc[1005],fcc[1005];
int main()
{
     int n,m;
     cin>>n>>m;
     for(int i=1;i<=n;i++)
     {
         int x,y;
         cin>>x>>y;
         c[x][y]++;
         fc[y]++;
     }
     for(int i=1;i<=m;i++)
     {
         int x,y;
         cin>>x>>y;
         cc[x][y]++;
         fcc[y]++;
     }
     int cap=0,beautiful=0;
     for(int i=1;i<=1000;i++){
        cap=cap+min(fc[i],fcc[i]);
     }
     for(int i=1;i<=1000;i++)
        for(int j=1;j<=1000;j++)
        beautiful=beautiful+min(c[i][j],cc[i][j]);
     cout<<cap<<" "<<beautiful<<endl;
    return 0;
}
