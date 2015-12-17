#include<stdio.h>

int main()
{
    long int n,k,b,rtn;

    while((scanf("%ld %ld",&n,&k))!=EOF)
    {
        rtn=0;b=0;
      while(n > 0)
   {
  rtn += n ;
  b += n ;
  n = b / k ;
  b = b % k ;
   }
   printf("%ld\n",rtn);
    }

return 0;
}
