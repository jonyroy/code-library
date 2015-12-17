#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,t,d;
    cin>>v1>>v2>>t>>d;
    if(v1<=v2)
    {
        int cnt;
        cnt=v1;
        int m=t-1;
        bool test false;
        for(int i=1;i<t;i++)
        {
          if(v1+d>=v2)
          {
              v1+=d;
              int n=v2-v1;
              int b=n/d;
              if()
              if(m>=n)
              cnt+=v1;
              else
              {
                  v1-=d;
                  test=true;
                  break;
              }
          }
          else
          {
              v1+=d;
              cnt+=v1;
          }
          m--;
        }
        for(int i=1;i<=m;i++)
            v1
    }
    return 0;
}
