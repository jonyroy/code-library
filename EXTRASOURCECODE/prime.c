#include<stdio.h>
#include<string.h>
#include<math.h>
int prime[2000000]={0,0,1,1};
int main()
{
    long long int n,p,i,j;
    int count;
    scanf("%lld",&n);
    printf("0011");
    for(i=4;i<=n;i++)
    {
       for(j=2;j<=i/2;j++)
       {
           if((i%j)==0)
           {
           count=0;
           break;
           }
           else
           count=1;
       }
       if(count==1)
       {
           printf("1");
       //prime[i]=1;
       }
       else
       {
            printf("0");
       //prime[i]=0;
       }
    }
    //for(i=1;i<=n;i++)
    //printf("%d",prime[i]);
    return 0;
}
