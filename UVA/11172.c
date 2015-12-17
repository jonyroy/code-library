#include<stdio.h>
int main()
{
    long int a,b,i;
    int n;
    scanf("%d",&n);
    if(n<15)
    {
    for(i=1;i<=n;i++)
    {
        scanf("%ld%ld",&a,&b);
        if(a>b)
        printf(">\n");
        if(a<b)
        printf("<\n");
        if(a==b)
        printf("=\n");
    }
    }
    return 0;
}
