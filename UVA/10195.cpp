#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    double a[3],s,area,r;
    while((scanf("%lf%lf%lf",&a[0],&a[1],&a[2]))!=EOF)
    {
        sort(a,a+3);
        printf("%.0lf %.0lf %.0lf\n",a[0],a[1],a[2]);
        if(a[0]+a[1]>=a[2])
        {
     s=(a[0]+a[1]+a[2])/2.0;
     area=sqrt(s*(s-a[0])*(s-a[1])*(s-a[2]));
     r=area/s;
     printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
