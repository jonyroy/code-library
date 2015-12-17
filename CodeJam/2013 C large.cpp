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
long long int save[100]={0,1,4,9,121,484,10201,12321,14641,40804,44944,1002001,1234321,4008004,100020001,102030201,104060401,121242121,123454321,125686521,400080004,404090404,10000200001,10221412201,12102420121,12345654321,40000800004,1000002000001,1002003002001,1004006004001,1020304030201,1022325232201,1024348434201,1210024200121,1212225222121,1214428244121,1232346432321,1234567654321,4000008000004,4004009004004};
int L_search(long long int ter)
{
int    i=1,j=39;
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
int R_search(long long int ter)
{
   int i=1,j=39;
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
   long long  int n,i,j,c,d,t,l;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>c>>d;
       if(c>4004009004004)
       {
           cout<<"Case #"<<i<<":"<<" "<<"0"<<endl;
       }
       else
        {
       if(d>=4004009004004)
       t=39;
       else
       t=R_search(d);
       j=L_search(c);
       l=(t-j)+1;
       cout<<"Case #"<<i<<":"<<" "<<l<<endl;
        }
    }
    return 0;
}
