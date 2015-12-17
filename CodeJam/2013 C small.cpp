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
using namespace std;
int save[100]={0,1,4,9,121,484};
int L_search(int ter)
{
int    i=1,j=5;
    while(i<j)
    {
      int k=(i+j)/2;
      if(ter==save[k])
        return k;
      else if(ter<save[k])
        j=k;
      else if(ter>save[k])
        i=k+1;
    }
    return i;
}
int R_search(int ter)
{
   int i=1,j=5;
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
    return i-1;
}
int main()
{
    int n,i,j,c,d,t,l;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>c>>d;
       if(c>484)
       {
           cout<<"Case #"<<i<<":"<<" "<<"0"<<endl;
       }
       else
        {
       if(d>=484)
       t=5;
       else
       t=R_search(d);
       j=L_search(c);
       l=(t-j)+1;
       cout<<"Case #"<<i<<":"<<" "<<l<<endl;
        }
    }
    return 0;
}
