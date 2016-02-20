#include<stdio.h>
int main()
{
    int a,b,m=1,n=2,c;
    for(c=1;c<=3;c++)
    {
        for(a=1;a<=n;a++)
        {
            printf(" ");
        }
        n-=1;
        for(b=1;b<=m;b++)
        {
            printf("0");
        }
        m+=2;
        printf("\n");
    }
    return 0;
}
