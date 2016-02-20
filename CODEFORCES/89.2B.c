//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int i,j,k,l,m=1,n,t;
    scanf("%d",&n);
    l=n;
    l=l*2;
 for(k=1;k<=n;k++)
 {
    for(i=1;i<=l;i++)
     {
      printf(" ");
     }
    for(j=0;j<m/2+1;j++)
     {
         if(k==1)
        printf("%d",j);
        else
        printf("%d ",j);
     }
     for(j=m/2-1;j>=0;j--)
     {
         if(j==0)
        printf("%d",j);
        else
        printf("%d ",j);
     }
     m+=2;
     l-=2;
     printf("\n");
 }
 for(j=0;j<=n;j++)
 printf("%d ",j);
 for(j=n-1;j>=0;j--)
 if(j==0)
 printf("%d",j);
 else
 printf("%d ",j);
 printf("\n");
 l=2;
int p=2;
m=0;
 for(k=1;k<=n-1;k++)
 {
    for(i=1;i<=l;i++)
    {
        printf(" ");
    }
   for(j=0;j<n-m;j++)
   {
    printf("%d ",j);
   }
   for(j=n-p;j>=0;j--)
   {
      if(j==0)
      printf("%d",j);
      else
      printf("%d ",j);
   }
    printf("\n");
    l=l+2;
    p++;
    m++;
  }
  for(i=1;i<=n*2;i++)
  printf(" ");
  printf("0\n");
    return 0;
}
