#include<stdio.h>
#include<math.h>
int main()
{
    long long int bangla,number,remain,a,b,c,d,e,f,g,i=1,h,k;
    while(scanf("%lld",&bangla)!=EOF)
    {
        printf("%4lld. ",i);
        if(bangla==0)
        {
            printf("0\n");
            continue;
        }
        a=bangla/10000000;
        remain=bangla%10000000;
        if(a>0)
        {
        if(a>0&&a<100)
        {
        printf("%lld kuti",a);
        if(remain>0)
        printf(" ");
        }
        else
        {
        h=a/10000000;
        k=a%10000000;
        if(h>0)
        printf("%lld kuti",h);
        if(h>0&&k>0)
        printf(" ");
        b=k/100000;
        c=k%100000;
        if(b>0)
        printf("%lld lakh",b);
        if(b>0&&c>0)
        printf(" ");
        d=c/1000;
        e=c%1000;
        if(d>0)
        printf("%lld hajar",d);
        if(d>0&&e>0)
        printf(" ");
        f=e/100;
        g=e%100;
        if(f>0)
        printf("%lld shata",f);
        if(f>0&&g>0)
        printf(" ");
        if(g>0)
        printf("%lld kuti",g);
        if(g==0&&f==0)
        printf(" kuti");
        if(remain>0)
        printf(" ");
        }
        }
        a=remain/100000;
        b=remain%100000;
        if(a>0)
        printf("%lld lakh",a);
        if(b>0&&a>0)
        printf(" ");
        c=b/1000;
        d=b%1000;
        if(c>0)
        printf("%lld hajar",c);
        if(d>0&&c>0)
        printf(" ");
        e=d/100;
        f=d%100;
        if(e>0)
        printf("%lld shata",e);
        if(e>0&&f>0)
        printf(" ");
        if(f>0)
        printf("%lld",f);
        printf("\n");
        i++;
    }
    return 0;
}

