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
long int save[100050]={0};
long int R_search(long int j,long int ter)
{
   int i=1;
    while(i<j)
    {
      int  k=(i+j)/2;
      if(ter==save[k])
        return k;
      else if(ter<save[k])
        j=k;
      else if(ter>save[k])
        i=k+1;
    }
    return i;
}
int main()
{
    long int n,m;
    cin>>n>>m;
    for(long int i=1;i<=n;i++)
    {
        long int a,b;
        cin>>a>>b;
         save[i]=save[i-1]+a*b;
    }
    for(long int i=1;i<=m;i++)
    {
        long int d;
        cin>>d;
        long int b=R_search(n,d);
        cout<<b<<endl;
    }
    return 0;
}
