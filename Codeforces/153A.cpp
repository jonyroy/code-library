#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     long m[110],ma=-8,l;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
        scanf("%ld",m+i);
        ma=max(ma,m[i]);
     }
     int kk=1,jony=2;
     for(int i=1;i<=n-1;i++)
     {
         for(int j=1;j<=n-kk;j++)
        {
         for(int k=1;k<=jony-1;k++)
         {
             l=(m[k]^m[k+1]);
         }
         ma=max(l,ma);
        }
        kk++;
        jony++;
     }

     cout<<ma;
    return 0;
}
