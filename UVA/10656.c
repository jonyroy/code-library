#include<stdio.h>
long int integer[10050],n,i;
int main()
{
    long int a,j;
    while(1)
    {
        j=0;
       scanf("%ld",&n);
       if(n==0)
       break;
       for(i=1;i<=n;i++)
       {
           scanf("%ld",&a);
           if(a>0)
            integer[++j]=a;
       }
       for(i=1;i<=j;i++)
       {
           printf("%ld",integer[i]);
           if(i<j)
           printf(" ");
       }
       if(j==0)
        printf("0");
       printf("\n");
    }
    return 0;
}
