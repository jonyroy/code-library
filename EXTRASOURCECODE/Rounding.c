#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    double n,deci,o,x,y,fl;
    int m,in;
    while(scanf("%lf",&n)!=EOF)
    {
        printf("Enter The Decimal Place:");
        scanf("%d",&m);
        x=pow(10,m+1);
        y=pow(10,m);
        deci=(double)5/x;
        o=n+deci;
        in=(o*y);
        fl=(double)in/y;
        printf("%lf\n",fl);
    }
    return 0;
}
