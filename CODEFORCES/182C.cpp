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
int main()
{
   long int v1[250],v2[250];
    long int n,k=1,sum=0,su=0;
    cin>>n;
    for(int i=1;i<=n*2-1;i++)
    {
        int a;
        cin>>a;
        if(a>0)
            sum=sum+a;
        else
            v2[k++]=a;
    }
    if(k>1)
        {
    sort(v2+1,v2+k-1);
     if(k-1>n)
        {
        for(int i=1;i<=n;i++)
         {
         su=su+v2[i]*(-1);
         }
        long  int s=0;
         for(int i=n+1;i<=k-1;i++)
         {
             s=s+v2[i]*(-1);
         }
         su=su-s;
         sum=sum+su;
        }
        else
        {
           long int s=0;
           for(int i=1;i<=k-1;i++)
           {
               s=s+v2[i]*(-1);
           }
           sum=sum+s;
        }
        }
        cout<<sum<<endl;
    return 0;
}
