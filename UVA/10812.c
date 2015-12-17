#include<stdio.h>
#include<math.h>
int main()
{
    long int T,a,b,i=1,x,y;
    scanf("%ld",&T);
    while(i<=T)
    {
        scanf("%ld%ld",&a,&b);
            x=(a+b)/2;
            y=abs(x-b);
            if((x+y)!=a||abs(x-y)!=b||x<0||y<0)
            printf("impossible\n");
            else
            printf("%ld %ld\n",x,y);
        i++;
    }

    return 0;
}
