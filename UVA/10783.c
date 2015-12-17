#include<stdio.h>
int main()
{
    int T,a,b,c,i=1,sum,j;
    scanf("%d",&T);
    while(i<=T)
    {
        sum=0;
     scanf("%d",&a);
     scanf("%d",&b);
     for(j=a;j<=b;j++)
     {
         if(j%2)
         sum=sum+j;
     }
       printf("Case %d: %d\n",i,sum);
       i++;
    }
    return 0;
}
