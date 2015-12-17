//Accepted
#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d",&n)&&n)
    {
     m=(n*(n+1)*(2*n+1))/6;
     printf("%d\n",m);
    }
    return 0;
}
