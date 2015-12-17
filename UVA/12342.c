//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
double b=180000.0,c=300000.0,d=400000.0,e=300000.0;
int main()
{
    double a,q;
    long long sum;
    int i=1,j,k,T;
    scanf("%d",&T);
    while(i<=T)
    {
        sum=0;
        scanf("%lf",&a);
        if(a<=b)
        {
        printf("Case %d: 0\n",i);
        i++;
        continue;
        }
        q=a-b;
        if(q<=c)
        {
        sum=sum+ceil((q*10.0)/100.0);
        if(sum>0&&sum<2000)
        sum=2000;
        printf("Case %d: %lld\n",i,sum);
        i++;
        continue;
        }
        else
        {
            q=q-c;
            sum=sum+ceil((c*10.0)/100.0);
        }
        if(q<=d)
        {
            sum=sum+ceil((q*15.0)/100.0);
            if(sum>0&&sum<2000)
            sum=2000;
            printf("Case %d: %lld\n",i,sum);
            i++;
            continue;
        }
        else
        {
            q=q-d;
            sum=sum+ceil((d*15.0)/100.0);
        }
        if(q<=e)
        {
            sum=sum+ceil((q*20.0)/100.0);
            if(sum>0&&sum<2000)
            sum=2000;
            printf("Case %d: %lld\n",i,sum);
            i++;
            continue;
        }
        else
        {
            q=q-e;
            sum=sum+ceil((e*20.0)/100.0);
        }
        if(q>0)
        {
            sum=sum+ceil((q*25.0)/100.0);
            printf("Case %d: %lld\n",i,sum);
        }
        i++;
    }
    return 0;
}
