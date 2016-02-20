#include<bits/stdc++.h>
using namespace std;
int main()
{

 int  n,m,sm=0,sum=0;
 for(int i=1;i<=3;i++){
 cin>>n;
 sum+=n;
}
 for(int i=1;i<=3;i++){
 cin>>m;
 sm+=m;
}
int l,k;
cin>>n;
  if(sum%5)
  l=sum/5+1;
  else
  l=sum/5;
  if(sm%10)
  k=sm/10+1;
  else
  k=sm/10;
  if(l+k<=n)
  cout<<"YES";
  else
  cout<<"NO";
}

