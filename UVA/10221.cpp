#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793
int main()
{
    double s,angle;
    string a;
    while(cin>>s>>angle>>a)
    {
        s=s+6440.0;
        if(a=="min")
            angle=angle/60.0;
        if(angle>180.0)
            angle=360-angle;
            angle=angle*(PI/180.0);
            double b=s*angle;
            double c=2*s*cos((PI-angle)/2.0);
        printf("%.6lf %.6lf\n",b,c);
    }
    return 0;
}
