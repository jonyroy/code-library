//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int i,j,k,n,tem,p;
    while(scanf("%d",&n))
    {
       if(n==0)
       break;
       p=n%5;
       if(p==0)
       printf("0.00\n");
       else if(p==1||p==4)
       printf("0.40\n");
       else
       printf("0.20\n");
    }
    return 0;
}
