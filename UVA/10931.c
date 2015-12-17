#include<stdio.h>
int main()
{
    long int I,m[100],i,j,k,count,T;
    char n[100];
    while(scanf("%ld",&I)&&I)
    {
     if(I==1)
     printf("The parity of 1 is 1 (mod 2).\n");
     else
     {
         i=0;
         count=0;
         while(I!=0)
         {
             m[i]=I%2;
             if(m[i]==1)
             count=count+1;
             I=I/2;
             i=i+1;
         }
         k=0;
         for(j=i-1;j>=0;j--)
         {
             n[k++]=m[j];

         }
         n[k]='\0';
         printf("The parity of %s is %ld (mod 2).\n",n,count);
     }
    }
    return 0;
}
