#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,i,count=0;

    while(1)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0&&b==0)
        break;
        else
        {
        count=0;
        if(a>0&&b>0)
        {
        for(i=1;i<=b;i++)
        {
            c=i*i;
            if(c>b)
            break;
            if(c>=a&&c<=b)
            count++;
        }
        printf("%lld\n",count);
        }
        }
    }
    return 0;
}
