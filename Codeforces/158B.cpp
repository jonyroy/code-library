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
int a[5],sum;
int main()
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        a[m]++;
    }
    sum=a[4]+a[3]+a[2]/2;

    a[2]=a[2]%2;
//    cout<<sum<<"   "<<a[2]<<endl;
//     (a[3]>=a[1])?a[1]=0:a[1]=(a[1]-a[3]);
      if(a[3]>=a[1])
        a[1]=0;
      else
        a[1]=a[1]-a[3];
     if(a[2]==1)
    {
        sum++;
     a[1]=a[1]-2;
     }
//     cout<<a[1]<<" "<<sum<<endl;
     if(a[1]>0)
    {
        sum=sum+a[1]/4;
        a[1]=a[1]%4;
     }
        if(a[1]>0)
            sum++;
    cout<<sum;
    return 0;
}
