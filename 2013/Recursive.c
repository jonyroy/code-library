#include<stdio.h>
int h(int b)
{
    if(b<=0)
    return 0;
    h(b-1);
    h(b-1);
    printf("%d ",b);
return 0;
}
int main()
{
    int b;
    scanf("%d",&b);
    h(b);
    return 0;
}
