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
    long int n,k,m,coun=0,y,sum=0,l;
    vector<int>v;
    vector<long int>vi;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
      if(m>0)
        {
            if(coun==0)
            y=m;
      else
        sum=sum+m;
      //v.push_back(m);
       coun++;
      }
      else
      vi.push_back(m);
    }
    //cout<<coun<<endl;
    if(coun==n)
    {
      if(k%2)
        sum=sum-y;
      else
        sum=sum+y;
    }
    else
    {
        sum=sum+y;
        int len=vi.size();
        //cout<<len<<endl;
        if(len>=k)
        {
        for(int i=0;i<k;i++)
        {
           sum=sum+(-1*vi[i]);
        }
        if(len>k)
        for(int i=k;i<len;i++)
        sum=sum+vi[i];
        }
        else
        {
           for(int i=0;i<len-1;i++)
            sum=sum+(-1*vi[i]);
            //cout<<sum<<endl;
             l=k-len;
             //cout<<l<<endl;
           if(l%2)
           {
              sum=sum-(-1*vi[len-1]);
           }
           else
           {
             sum=sum+(-1*vi[len-1]);
           }
        }
    }
    cout<<sum<<endl;
    return 0;
}
