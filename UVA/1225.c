//Accepted
#include<stdio.h>
int main()
{
    long int n,i,m,j,a,b,T;
    scanf("%ld",&T);
    while(T)
    {
        scanf("%ld",&n);
     int value[10]={0};
     for(i=n;i>=1;i--)
     {
         m=i;
         while(1)
         {
            a=m%10;
            value[a]++;
            b=m/10;
            m=b;
            if(m==0)
            break;
         }
     }
     for(j=0;j<10;j++)
     {
     printf("%ld",value[j]);
     if(j<9)
     printf(" ");
     }
     printf("\n");
     T--;
    }
    return 0;
}
