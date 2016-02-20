#include<stdio.h>
#include<math.h>

int main()
{
int a,b,x,y;

while(1)
{
    scanf("%d %d",&a,&b);
    if(a==-1&&b==-1)
    break;
    x=abs(b-a);

    if(b>a)
    y=100-b+a;
    else
    y=100-a+b;

    if(x<y)
    printf("%d\n",x);
    else
    printf("%d\n",y);
}
return 0;
}
