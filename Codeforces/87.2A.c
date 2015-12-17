//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int n,a,b,i,sum,max=-1,c;
    scanf("%d%d%d",&n,&a,&b);
    sum=b-a;
    if(max<sum)
    max=sum;
    for(i=2;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        c=sum-a;
        sum=c+b;
        if(max<sum)
        max=sum;
    }
    printf("%d\n",max);
    return 0;
}
