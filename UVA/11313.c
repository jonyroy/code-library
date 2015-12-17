//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long int n,m,i,j,k,T,t=1,sum;
    scanf("%ld",&T);
    while(t<=T)
    {
        scanf("%ld%ld",&n,&m);
        sum=0;
        if(n==m)
        printf("1\n");
        else
        while(1)
        {
            sum=sum+(n/m);
            if(n==m)
            {
            printf("%ld\n",sum);
            break;
            }
            if(n<m)
            {
                printf("cannot do this\n");
                break;
            }
            n=(n%m)+(n/m);
        }
        t++;
    }
    return 0;
}
