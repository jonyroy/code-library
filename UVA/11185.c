#include<stdio.h>
int main()
{
     long long int d,n,t[1000];
     int i,j,l=1;
    while(l<=100)
    {
        i=0;
        scanf("%lld",&d);
        if(d<0)
        break;
        if(d==0)
        printf("0");
        while(d>0)
        {
            t[i]=d%3;
            n=d/3;
            d=n;
            i++;
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%lld",t[j]);
        }
        printf("\n");
        l++;
    }
    return 0;
}
