//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,w,area,s;
    while((scanf("%lf%lf%lf",&u,&v,&w))!=EOF)
    {
    s=(w+v+u)/2.0;
    area=(4.0/3.0)*sqrt(s*(s-u)*(s-v)*(s-w));
    if(area>0)
    printf("%.3lf\n",area);
    else
    {
    printf("-1.000\n");
    }
    }
    return 0;
}
