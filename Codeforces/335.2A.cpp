#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    int aa,bb,cc;
    aa=a-x;
    bb=b-y;
    cc=c-z;
    int a1=0,b1=0,c1=0;
    if(aa>0)
        a1=aa/2;
    if(bb>0)
        b1=bb/2;
    if(cc>0)
        c1=cc/2;
    int cnt=a1+b1+c1;
    int r=0,t=0,yy=0;
    if(aa<0)
      r=aa*(-1);
    if(bb<0)
      t=bb*(-1);
    if(cc<0)
      yy=cc*(-1);
    if(r+t+yy<=cnt)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
