#include<bits/stdc++.h>
using namespace std;
long n,a[2005][2005];
long long int m[2005][2005],b[2005][2005],c[2005][2005];
int main()
{
   scanf("%ld",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
        scanf("%I64d",&a[i][j]);
   }
   int h,k;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
          b[i][j]+=a[i][j];
          c[i][j]+=a[i][j];
          if(i > 1 && j < n)
          b[i][j]+=b[i-1][j+1];
          if(i > 1 && j > 1)
          c[i][j]+=c[i-1][j-1];
       }
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
        m[i][j]=b[i][j]+c[i][j]-a[i][j];
   }
   memset(b,0,sizeof(b));
   memset(c,0,sizeof(c));
   for(int i=n;i>=1;i--)
   {
       for(int j=1;j<=n;j++)
       {
          b[i][j]+=a[i][j];
          c[i][j]+=a[i][j];
          if(i < n && j > 1)
          b[i][j]+=b[i+1][j-1];
          if(i < n && j < n )
          c[i][j]+=c[i+1][j+1];
       }
   }
   int x,y,x1,y1;
   long long ma=-9,ma1=-3;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           m[i][j]+=b[i][j]+c[i][j]-2*a[i][j];
           if((i+j)&1){
           if(ma<=m[i][j])
           {
               ma=m[i][j];
               x=i,y=j;
           }
           }
           else
            if(ma1<=m[i][j])
            {
               ma1=m[i][j];
               x1=i,y1=j;
            }
       }
   }
   printf("%I64d\n",ma+ma1);
   printf("%d %d %d %d\n",x,y,x1,y1);
}
