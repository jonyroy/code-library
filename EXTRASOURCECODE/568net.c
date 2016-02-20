#include <stdio.h>
int main()
{
int n,m,j,prod,five,two;
    while(scanf("%d",&m)==1)
    {
     n = m;
     five = 0;
     two = 0;
     prod=1;
     while(n>0)
     {
      j = n;
      while(j%5==0)
      {
       j/=5;
       five++;
      }
       while(j%2==0)
       {
        j/=2;
        two++;
       }
        prod=(prod*(j%10))%10;
        n--;
       }
        while(five>two)
        {
         prod=(prod*5)%10;
         five--;
        }
         while(two>five)
         {
          prod=(prod*2)%10;
          two--;
         }
	        printf("%5d -> %d\n",m,prod);
    }
	    return 0;
	}
