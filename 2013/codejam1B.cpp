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
    int T,A,N,arr[110],cou;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>T;
    int i=1;
    while(i<=T)
    {
          cou=0;
          cin>>A>>N;
          for(int j=0;j<N;j++)
          cin>>arr[j];
          if(A==1)
          {
              printf("Case #%d: %d\n",i,N);
              i++;
              continue;
          }
          sort(arr,arr+N);
          for(int j=0;j<N;j++)
          {
              if(A>arr[j])
                A=A+arr[j];
              else
              {
                  int tem=2*A-1;
                  if(tem>arr[j])
                  {
                      cou++;
                      A=tem;
                  }
                  else{

                    cou++;
                  }
              }
          }
     printf("Case #%d: %d\n",i,cou);
          i++;
    }
    return 0;
}
