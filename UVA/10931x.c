#include<stdio.h>
int main()
{
  long int i,num,d,k,c,count,rev[100];
 while(1)
 {
     scanf("%ld",&num);
     if(num==0)
     break;
     i=0;
     count=0;
    printf("The parity of ");
  while(num)
  {
      d=num%2;
      num=num/2;
      if(d==1)
      count++;
      rev[i++]=d;
  }
  k=i-1;
  for(i=k;i>=0;i--)
  printf("%ld",rev[i]);
  printf(" is %ld (mod 2).\n",count);
 }
return 0;
}
