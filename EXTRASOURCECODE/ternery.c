#include<stdio.h>

int main()
{
long int num,rev[100],d,i,k,zero=0;
  for(;;)
  {
      scanf("%ld",&num);
      if(num<0)
      break;
      if(num!=0)
      {
     i=0 ;
    while(num)
    {
      d=num%3;
      num=num/3;
      rev[i++]=d;
    }
    k=i-1;
    for(i=k;i>=0;i--)
    {
      printf("%ld",rev[i]);
    }
    printf("\n");
      }
      else
      printf("%ld\n",zero);
  }
return 0;
}

