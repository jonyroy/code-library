#include <stdio.h>
#include <math.h>
int main()
{
    double med1, med2, med3, med_s, area, a;
    for(a=0; a<1000; a++)
    {
        scanf("%lf %lf %lf", &med1, &med2, &med3);
        med_s=(med1+med2+med3)/2;
        area=(4.0/3.0)*(sqrt(med_s*(med_s-med1)*(med_s-med2)*(med_s-med3)));
        if(area>0)
            printf("%.3lf\n", area);
        else
        {   area=-1;
            printf("%.3lf\n", area);
        }
    }
    return 0;
}
