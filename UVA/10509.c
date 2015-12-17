//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    double n,b,dx;
    long a;
    while(scanf("%lf",&n))
    {
        if(n==0.0)
        break;
        a=(float)pow(n,.333333333);
        dx=(n-a*a*a)/(3*a*a);
        printf("%.4f\n",a+dx);
    }
    return 0;
}
