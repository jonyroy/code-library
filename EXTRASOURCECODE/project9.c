#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    printf("\nEnter Value(above ten)");
    scanf("%d",&a);
    b=a-3;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i<=3||i>b||j<=3||j>b)
            printf("0 ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
