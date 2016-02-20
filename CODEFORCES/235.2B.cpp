#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,a[4005]={0};
     cin>>n>>k;
     int cntt=0,cnn=0,cnttt=0;
     for(int i=1;i<=k;i++)
     {
         int c,cn,cnt;
         cin>>c;
         if(c==1){
         cin>>cn>>cnt;
         a[cn]=1;
         a[cnt]=1;
         ++cntt;
         }
         else
         {
             cin>>cn;
             a[cn]=1;
             ++cnn;
         }
     }
     for(int i=1;i<n-1;i++)
     {
         if(a[i]==a[i+1]&&a[i]==0)
         ++cnttt,i++;
     }
   int jo=(n-1)-(2*cntt+cnn);
   cout<<jo-cnttt<<" "<<jo;
}
