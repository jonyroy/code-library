//solved by myself.
#include<stdio.h>
#include<math.h>
int main()
{

   long double n,m,i,sum;
    while(scanf("%Lf",&n)!=EOF)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+pow(i,3);
        }
        printf("%.0Lf\n",sum);
    }
    return 0;
}
