#include <stdio.h>
int cases, caseno;
int n, K, MOD;
int A[1001];
int main()
 {
  int i,i1,i2,i3,...,iK;
  scanf("%d",&cases);
  while(cases--)
  {
    scanf("%d%d%d",&n,&K,&MOD);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    int res = 0;
    for(i1=0;i1<n;i1++)
    {
     for(i2=0;i2<n;i2++)
     {
       for(i3=0;i3<n;i3++)
       {
         ...
           for(iK=0;iK<n;iK++)
           {
            res=(res+A[i1]+A[i2]+A[i3]+...+A[iK])%MOD;
           }
         ...
       }
     }
    }
    printf("Case %d: %d\n",++caseno,res);
  }
  return 0;
}
