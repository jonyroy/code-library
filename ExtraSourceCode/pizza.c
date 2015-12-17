#include<stdio.h>

int main()
{

long int cutn,nop;

while(1)
{
    scanf("%ld",&cutn);
    if(cutn<0)
    break;
   nop = (cutn*(cutn+1))/2 + 1;

   printf("%ld\n",nop);
}

return 0;
}
