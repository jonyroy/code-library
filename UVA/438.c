//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,s,area,cur,r;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {
     a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    r=(a*b*c)/(4*area);
    cur=2*3.141592653589793*r;
    printf("%.2lf\n",cur);
    }
    return 0;
}
