#include<bits/stdc++.h>
int main()
{
    int t,i;
    float  a,b,n,d,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%f%f",&c,&d);
    a=(9.0/5.0)*c+32.0;
    b=a+d;
    n=(b-32.0)*(5.0/9.0);
    printf("Case %d: %.2f\n",i,n);
    }
return 0;
}
