#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,u,v,s,ac;
int T,t=1;
while(scanf("%d",&T)&&T)
{
    scanf("%lf%lf%lf",&a,&b,&c);
    if(T==1)
    {
    ac=(b-a)/c;
    s=(b*b-a*a)/(2*ac);
    printf("Case %d: %.3lf %.3lf\n",t,s,ac);
    }
    if(T==2)
    {
    ac=(b-a)/c;
    s=(b*b-a*a)/(2*c);
    printf("Case %d: %.3lf %.3lf\n",t,s,ac);
    }
    if(T==3)
    {
    s=sqrt(a*a+2*b*c);
    ac=(s-a)/b;
    printf("Case %d: %.3lf %.3lf\n",t,s,ac);
    }
    if(T==4)
    {
    s=sqrt(a*a-2*b*c);
    ac=(a-s)/b;
    printf("Case %d: %.3lf %.3lf\n",t,s,ac);
    }
    t++;
}
return 0;
}
