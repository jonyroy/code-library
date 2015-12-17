//solved ny nije nije
#include<stdio.h>
#include<math.h>
int main()
{

    double n,p,k;
    while(scanf("%lf%lf",&n,&p)!=EOF)
    {
      k=1/n;
      printf("%.0f\n",pow(p,k));
    }
    return 0;
}
