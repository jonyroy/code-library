#include<stdio.h>
int main()
{
 long long int a,b,c,m,T=1;
  scanf("%lld",&m);
  while(m)
  {
  scanf("%lld %lld %lld",&a,&b,&c);
  if(a+b>c&&b+c>a&&c+a>b)
  {
     if(a==b&&b==c&&c==a)
     printf("Case %lld: Equilateral\n",T);
     else if(((a==b)&&(b!=c))||((b==c)&&(c!=a))||((c==a)&&(b!=c)))
     printf("Case %lld: Isosceles\n",T);
     else
     printf("Case %lld: Scalene\n",T);

  }
  else
  printf("Case %lld: Invalid\n",T);
  m--;
  T++;
  }
return 0;
}
