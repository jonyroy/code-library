//wrong answer
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n,m;
  cin>>t;
  while(t--)
  {
     cin>>n>>m;
     if(n<0)
     n=n*(-1);
     if(m<0)
     m=m*(-1);
     cout<<n+m<<endl;
  }
}
