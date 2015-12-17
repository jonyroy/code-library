//Accepted
#include<stdio.h>
int main()
{
    long int n,result,i;
    while(scanf("%ld",&n)&&n)
    {
        result=0;
        for(i=1;i<=n;i++)
        {
            result=result+i*i;
        }
    printf("%ld\n",result);
    }
    return 0;
}
