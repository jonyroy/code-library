#include<stdio.h>
int main()
{
    int n=3,m=5,a,b,c,h,l=1,i;
    for(c=1;c<=4;c++)
   {
    for(a=1;a<=n;a++)
    {
        printf("  ");
    }
    n-=1;
    for(h=1;h<=l;h++)
    {
        printf("0 ");
    }
    l+=2;
      printf("\n");
   }
   for(b=1;b<=3;b++)
   {
       for(i=1;i<=7;i++)
        printf("0 ");
        printf("\n");
   }
    return 0;
}


