#include<stdio.h>
int main()
{
    long int temp,n,m[1000],count,i,j,k,b;
    while(scanf("%ld",&n)!=EOF)
    {
        count=0;
     for(i=0;i<n;i++)
     {
         scanf("%ld",&m[i]);
     }
     b=n-1;
     for(i=0;i<b;i++)
     {
         for(j=0;j<b-i;j++)
         {
             if(m[j]>m[j+1])
             {
                 temp=m[j];
                 m[j]=m[j+1];
                 m[j+1]=temp;
                 count++;
             }
         }
     }
     printf("Minimum exchange operations : %ld\n",count);
    }
    return 0;
}
