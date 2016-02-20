#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    long int a,x,y,b,c,d;
    scanf("%ld%ld%ld",&a,&x,&y);
    if(x<0)
    x=x*-1;
    if(y==0||(float)x>=(float)a/2.0||y%a==0)
    {
    printf("-1\n");
    return 0;
    }
    if((y/a)<1)
    printf("1\n");
    else if(y/a==1)
    printf("2\n");
    else if((y/a)%2==0)
    printf("-1\n");
    else
    {
        d=y/a+1;
         b=(y/a)/2;
         c=d-b;
         c=c+b*2;
         printf("%ld\n",c);
    }
    return 0;
}
