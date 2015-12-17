#include<stdio.h>
int main()
{
    float F,C,fer,celcius;
    int T,i=1;
    scanf("%d",&T);
    while(T)
    {
     scanf("%f%f",&C,&F);
     fer=(9.0/5.0)*C+32+F;
     celcius=(5.0*fer-160)/9.0;
     printf("Case %d: %.2f\n",i,celcius);
     T--;
     i++;
    }
    return 0;
}
