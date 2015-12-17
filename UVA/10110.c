#include<stdio.h>
#include<math.h>
int main()
{

    long int n,o,m;
    while(scanf("%ld",&n)&&n)
    {
        o=sqrt(n);
        m=pow((int)o,2);
     if(m==n)
     printf("yes\n");
     else
     printf("no\n");
    }
    return 0;
}
