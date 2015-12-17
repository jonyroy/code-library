//Accepted
#include<stdio.h>
int main()
{
    long long int n,m,i,a,j,value[100],count;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        i=1;
        count=0;
        if(m<2||n<2||n%m!=0)
        {
         printf("Boring!\n");
        }
        else
         {
             value[0]=n;
           while(1)
           {
               if(n%m!=0)
               {
               printf("Boring!\n");
               count++;
               break;
               }
               n/=m;
               value[i++]=n;
               if(n==1)
               break;
           }
           if(count==0)
           {
           for(j=0;j<i;j++)
           {
             printf("%lld",value[j]);
             if(j!=i-1)
             printf(" ");
           }
           printf("\n");
           }
          }
     }
    return 0;
}
