#include<stdio.h>
#include<math.h>
int main()
{
    long int n,m,i,j,k,count,countdown,value;
    float percen;
    while(scanf("%ld%ld",&n,&m)!=EOF)
    {
        countdown=0;
        k=0;
        for(i=n;i<=m;i++)
        {
            count=0;
            value=i*i+i+41;
            for(j=1;j<=value;j++)
            {
                if(value%j==0)
                count++;
            }
            if(count==2)
            countdown++;
        }
        percen=(float)countdown/(float)(m-n+1)*100.0;
        printf("%.2f\n",percen);
        printf("%d\n",(m-n+1));
    }
    return 0;
}
