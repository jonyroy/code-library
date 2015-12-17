#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,count,i;
    while(1)
    {
        count=0;
        scanf("%ld%ld",&a,&b);
        if(a==0&&b==0)
        break;
        for(i=a;i<=b;i++)
        {
            c=pow((int)i,2);
            if(c<=b)
            count++;
        }
        printf("%ld\n",count);
    }
    return 0;
}
