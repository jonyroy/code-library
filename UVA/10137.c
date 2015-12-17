//Accepted
#include<stdio.h>
int main()
{
     double sum,a,aver,d,n,p;
    long long int S,i;
    while(1)
    {
        scanf("%lld",&S);
        if(S==0)
        break;
        double m[S];
        sum=0;
        for(i=0;i<S;i++)
        {
            scanf("%lf",&a);
            m[i]=a*100;
            sum=sum+m[i];
        }
        aver=sum/(double)S;
        n=0;
        p=0;
        for(i=0;i<S;i++)
        {
            d=(double)(long)(m[i]-aver);
            if(d<0)
            {
            n+=d;
            }
            else
            p+=d;
        }
        if(-n>p)
        printf("$%.2lf\n",-n/100.0);
        else
        printf("$%.2lf\n",p/100.0);
    }
    return 0;
}
