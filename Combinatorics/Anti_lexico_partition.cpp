#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[100],n,i,h,m,t,r;
    cin>>n;
    for(i=1;i<=n;i++)
    x[i]=1;
    x[1]=n,m=1,h=1;
    cout<<x[1]<<endl;
      while(x[1]!=1)
      {
          if(x[h]==2)
          {
              m=m+1,x[h]=1,h=h-1;
          }
          else
          {
              r=x[h]-1,t=m-h+1,x[h]=r;
              while(t>=r)
              {
                  h=h+1,x[h]=r,t=t-r;
              }
              if(t==0)
                m=h;
              else
              {
                m=h+1;
                if(t>1)
                h=h+1,x[h]=t;
              }
          }
          for(int j=1;j<=m;j++)
          cout<<x[j];
          cout<<endl;
      }
    return 0;
}
