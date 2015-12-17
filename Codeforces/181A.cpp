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
int main()
{
    int n,j=1,k=1,l=1,p[1010],q[1010],r[1010],a;
    bool test=false;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>a;
       if(a<0)
            p[j++]=a;
       else if(a>0)
        q[k++]=a;
       else
         r[l++]=a;
    }
    j=j-1;k=k-1;
    if(k==0)
    {
      test=true;
      q[0]=p[j--];
      q[1]=p[j--];
    }
if((j)%2)
{
    cout<<j;
    for(int i=1;i<=j;i++)
        cout<<" "<<p[i];
}
if((j)%2==0)
{
    cout<<j-1;
    for(int i=1;i<j;i++)
        cout<<" "<<p[i];
        r[l++]=p[j];
}
cout<<endl;
if(test)
{
    cout<<"2"<<" "<<q[0]<<" "<<q[1]<<endl;
}
else
{
    cout<<k;
    for(int i=1;i<=k;i++)
        cout<<" "<<q[i];
    cout<<endl;
}
cout<<l-1;
for(int i=1;i<l;i++)
    cout<<" "<<r[i];
cout<<endl;
    return 0;
}
