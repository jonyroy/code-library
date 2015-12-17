    #include<stdio.h>
    #include<math.h>

    int main()
    {
    long double s,max,a,b,c,v,acs,acb,at,y;
    while(scanf("%Lf%Lf%Lf",&a,&b,&c)==3)
    {
    s=(a+b+c)/2;
    at=sqrt(s*(s-a)*(s-b)*(s-c));
    acs=3.141592653589793*pow((at/s),2);
    v=at-acs;
    acb=3.141592653589793*pow(((a*b*c)/(4*at)),2);
    y=acb-(v+acs);
    printf("%.4Lf %.4Lf %.4Lf\n",y,v,acs);
    }
    return 0;
    }
