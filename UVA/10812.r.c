#include<stdio.h>
int main ()
{
   long int a,b,s,d,T,abd;

    scanf("%ld",&T);
  while(T)
    {
   scanf("%ld %ld",&s,&d);
 b =(s-d)/2;
 a =s-b;
 abd=(a-b);
 if(abd<0)
 abd=abd*-1;
if(a+b!= s ||abd!=d||a<0||b<0)
printf("impossible\n");
else
printf("%ld %ld\n",a,b);
T--;
}
return 0;
}
