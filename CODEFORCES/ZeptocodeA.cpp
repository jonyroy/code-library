#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x,t[2005],h[2005],m[2005],k=0,cnt,l=0,c=0,q[2005],w[2005],e[2005];
  cin>>n>>x;
  int s=x;
  for(int i=1;i<=n;i++){
  cin>>t[i]>>h[i]>>m[i];
  w[i]=h[i];
  }
  bool test;
  for(int i=1;i<=n;i++)
  {
    cnt=-544;
    test=false;
     for(int j=1;j<=n;j++)
     {
         if(x>=h[j]&&h[j]>=0&&k==t[j])
         {
           if(cnt<m[j])
           {
             cnt=m[j];
             c=j;
             test=true;
           }
         }
     }
     if(test)
     {
     l++;
     x+=cnt;
     h[c]=-1;
     if(k)
     k=0;
     else
     k=1;
     }
  }
  k=1;
  int b=0;

  for(int i=1;i<=n;i++)
  {
    cnt=-544;
    test=false;
     for(int j=1;j<=n;j++)
     {
         if(s>=w[j]&&w[j]>=0&&k==t[j])
         {
           if(cnt<m[j])
           {
             cnt=m[j];
             c=j;
             test=true;
           }
         }
     }
     if(test)
     {
     b++;
     s+=cnt;
     w[c]=-1;
     if(k)
     k=0;
     else
     k=1;
     }
  }
  cout<<max(b,l)<<endl;
}
