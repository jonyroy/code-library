#include<stdio.h>
int main()
{
    int a=6,n,m,i,j,l;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=2;j++)
        {
            for(l=1;l<=a;l++)
            {
                printf(" ");
            }
            for(n=1;n<=4;n++)
            printf("0");
            printf("\n");
        }
         a-=2;
        printf("\n");
    }
    return 0;
}
