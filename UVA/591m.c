#include<stdio.h>
#include<math.h>

int main()
{
   long int emp[3],i,T,m=1,j,tem;

   scanf("%ld",&T);
    while(T)
    {
        for(i=0;i<3;i++)
        scanf("%ld",&emp[i]);
for(i=0;i<3;i++)
for(j=1;j<3-i;j++)
if(emp[j-1]>emp[j])
{
tem=emp[j-1];
emp[j-1]=emp[j];
emp[j]=tem;
}
printf("Case %ld: %ld\n",m,emp[1]);
   m++;
   T--;
    }

    return 0;
}
