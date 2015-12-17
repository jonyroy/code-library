#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,m,a,b,s[1000];
      cin>>a>>b>>n;
      if(a<0)
      s[1]=1000000007+(a%1000000007);
      else
      s[1]=(a%1000000007);
      if(b<0)
      s[2]=1000000007+(b%1000000007);
      else
      s[2]=(b%1000000007);
      for(int i=3;i<=100;i++)
      {
           int jo=(s[i-1]-s[i-2]);
           if(jo<0)
           s[i]=1000000007+(jo%1000000007);
           else
           s[i]=(jo%1000000007);
      }
     int j=n%6;
     if(j==0)
     cout<<s[6];
     else
     cout<<s[j];
}
