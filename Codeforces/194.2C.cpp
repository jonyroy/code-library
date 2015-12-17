#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,c,d,t1=0,t2=0,mm,nn;
    cin>>n>>m;
    while(n+m>=3&&m>0&&n>0)
    {
      nn=min(n,m);
      mm=max(n,m);
      if(nn>=1&&mm>=2)
      {
          t1++;
          nn--;
          mm-=2;
      }
      n=nn,m=mm;
    }
    cout<<t1;
    return 0;
}
