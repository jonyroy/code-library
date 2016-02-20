#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,m[5005]={0};
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>a;
      m[a]++;
   }
   int cnt=0;
   for(int i=1;i<=n;i++)
   {
        if(m[i]==0)
        cnt++;
   }
   cout<<cnt<<endl;
}
