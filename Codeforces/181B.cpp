#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
#define F first
#define S second
using namespace std;
int main()
{
    int n,m,a,b,store[50]={0};
    pair<int,int>v[20];
    vector<int>vi[50](50,3,0);
    cin>>n>>m;
    int k=1;
    if(m==0)
    {
        for(int i=1;i<=n/3;i++)
        {
            for(int j=1;j<=3;j++)
                {
            cout<<k" ";
            k++;
                }
            cout<<endl;
        }
        return 0;
    }
    for(int i=0;i<m;i++)
    {
      cin>>a>>b;
      v[i]=make_pair(a,b);
    }
   for(int i=1;i<=n/3;i++)
   {

   }
    return 0;
}
