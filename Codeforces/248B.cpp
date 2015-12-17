#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m[100009]={0},a[100009]={0};
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     int k;
     cin>>k;
     m[i]=m[i-1]+k;
     a[i]=k;
   }
   sort(a,a+n+1);
   for(int i=1;i<=n;i++)
   a[i]+=a[i-1];
   int l;
   cin>>l;
   for(int i=1;i<=l;i++)
   {
     int r,t,y;
     cin>>r>>t>>y;
     if(r==1)
     {
       cout<<m[y]-m[t-1]<<endl;
     }
     else
     cout<<a[y]-a[t-1]<<endl;
   }
}
