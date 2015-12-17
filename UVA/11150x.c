#include<stdio.h>
int main()
{
  long int e,f,c,sum=0,d,a,n,T,v;
 scanf("%ld",&T);
 while(T)
 {
  scanf("%ld %ld %ld",&e,&f,&c);
  n=e+f;
   sum=0;
      while(n>=c)
      {
       sum=sum+(n/c);
       n=(n%c)+(n/c);
      }
printf("%ld\n",sum);
T--;
 }
return 0;
}
