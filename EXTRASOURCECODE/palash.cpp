#include<stdio.h>
int main()
{

     int n,i=1,m=1,sum=0,j;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         if(i%2==1)
            m=1;
         else
            m=0;
         for(j=1;j<=i;j++)
            {
               printf("%d",m);
               if(m==0)
                m=1;
               else
                m=0;
            }
            printf("\n");
     }

    return 0;
}
