#include<stdio.h>
int main ()
{

    long a,b,count,i;


    while(1)
    {
        count=0;
        scanf("%ld %ld",&a,&b);
        if(a==0&&b==0)
        break;
        for(i=1;i<=316;i++)
        if(i*i>=a&&i*i<=b)
        count++;
        printf("%ld\n",count);

    }
    return 0;
}
