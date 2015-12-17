#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<string.h>
#include<complex.h>
int f91(int n)
{
    if(n<=100)
    return f91(n+1);
    else
    return n-10;
}
int main()
{

    int m,n;
    while(scanf("%d",&n)!=EOF)
    {
        m=f91(n);
        printf("%d\n",m);
    }
    return 0;
}
