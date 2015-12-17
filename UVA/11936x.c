#include<stdio.h>
int main()
{
    int a[3],d,i=1,j,tem;
    scanf("%d",&d);

    while(i<=d)
    {
     scanf("%d%d%d",&a[0],&a[1],&a[2]);
     for(j=0;j<2;j++)
     {
         if(a[j]>a[j+1])
         {
             tem=a[j];
             a[j]=a[j+1];
             a[j+1]=tem;
         }
     }
     if(a[0]+a[1]>a[2])
     printf("OK\n");
     else
     {
     printf("Wrong!!\n");
     }
     i++;
    }

    return 0;
}
