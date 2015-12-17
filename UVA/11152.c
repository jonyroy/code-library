#include<stdio.h>
#include<math.h>
int main()
{
    int a[5],i,temp;
    double r,R,S,AT,AC,AI,sunflower,violet;
    while(scanf("%ld%ld%ld",&a[0],&a[1],&a[2])!=EOF)
    {
         S=(double)(a[0]+a[1]+a[2])/2;
         AT=(double)sqrt(S*(S-a[0])*(S-a[1])*(S-a[2]));
         r=(double)(a[0]*a[1]*a[2])/(4*AT);
         AC=3.141592653589793*r*r;
         sunflower=AC-AT;
         R=AT/S;
         AI=3.141592653589793*R*R;
         violet=AT-AI;
         printf("%.4lf %.4lf %.4lf\n",sunflower,violet,AI);
    }
    return 0;
}
