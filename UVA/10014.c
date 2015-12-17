//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    float a0,a,c,sum,result,b;
    int T,i=1,n,j;
    scanf("%d",&T);
    while(i<=T)
    {

        scanf("%d",&n);
        scanf("%f%f",&a0,&a);
        b=((n*a0)+a)/(n+1);
        sum=0.0;
        for(j=n;j>=1;j--)
        {
            scanf("%f",&c);
            sum=sum+j*c;
        }
        result=b-(2*sum)/(n+1);
        printf("%.2f\n",result);
        if(i<T)
        printf("\n");
        i++;
    }
    return 0;
}
