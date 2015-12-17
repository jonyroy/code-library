#include<stdio.h>
int main()
{
    int a[15],temp,i,j,T,min,count;
    while(scanf("%d",&T)!=EOF)
    {
    for(i=0;i<T;i++)
    {
        scanf("%d",&a[i]);
    }
    count=0;
        for(i=0;i<T-1;i++)
        {
            min=i;
            for(j=i+1;j<T;j++)
            {
               if(a[min]>a[j])
               {
               count++;
               min=j;
               }
            }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
