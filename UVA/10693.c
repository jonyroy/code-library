//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    double L,f,v,s;
    while(scanf("%lf%lf",&L,&f))
    {
        if(L==0.0&&f==0.0)
        break;
        v=sqrt(2.0*L*f);
        s=(v*3600.0)/(2.0*L);
        printf("%.8lf %.8lf\n",v,s);
    }
    return 0;
}
