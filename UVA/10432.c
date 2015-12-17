#include<stdio.h>
#include<math.h>
int main()
{

    double r,n,m,area,o,x;
    while(scanf("%lf%lf",&r,&n)!=EOF)
    {
        x=(360.0/n)*(3.14159265358979/180.0);
        m=sin(x);
        area=(r*r*n*m)/2;
        printf("%.3f\n",area);
    }
    return 0;
}
