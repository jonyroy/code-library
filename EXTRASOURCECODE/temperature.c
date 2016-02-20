#include<stdio.h>
int main ()
{
    double a,f,c,b,t,i;
    int P=1;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf",&a,&b);
        f=(9.0/5.0)*a+32;
        c=(((f+b)-32)*5)/9.0;
        printf("Case %d: %.2lf\n",P,c);
        P++;
    }
    return 0;
}
