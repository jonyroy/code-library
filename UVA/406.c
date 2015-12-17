//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 2000
int store[MAX]={0};
int main()
{
    long int i,j,n,m,number,count,prime[1000],p;
    for(i=2;i<=(int)(sqrt((double)MAX));i++)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=MAX;j+=i)
          {
              store[j]=1;
          }
      }
    }
    prime[1]=1;
    prime[2]=2;
    while(scanf("%ld%ld",&n,&m)!=EOF)
    {
        printf("%ld %ld:",n,m);
        j=1;
        for(i=1;i<=n;i++)
        {
            if(store[i]==0)
            {
                prime[j++]=i;
            }
        }
        count=j-1;
        if(count%2==0)
        {
            if(m*2>=count)
            {
            for(i=1;i<=count;i++)
            printf(" %ld",prime[i]);
            }
            else
            {
            number=count-m*2;
            p=number/2;
            for(i=p+1;i<=count-p;i++)
            printf(" %ld",prime[i]);
            }
        }
        else
        {
            if((m*2-1)>=count)
            {
            for(i=1;i<=count;i++)
            printf(" %ld",prime[i]);
            }
            else
            {
            number=(count-(m*2-1));
            p=number/2;
            for(i=p+1;i<=count-p;i++)
            printf(" %ld",prime[i]);
            }
        }
 printf("\n\n");
    }
    return 0;
}
