//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 40
int store[MAX]={0};
int main()
{
    int i,j,n,m,p;
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
    store[1]=1;
    while(scanf("%d",&n))
    {
        if(n==0)
        break;
    if(n==2)
    printf("Perfect: 6!\n");
    else if(n==3)
     printf("Perfect: 28!\n");
         else if(n==5)
     printf("Perfect: 496!\n");
              else if(n==7)
     printf("Perfect: 8128!\n");
              else if(n==13)
     printf("Perfect: 33550336!\n");
                   else if(n==17)
     printf("Perfect: 8589869056!\n");
                        else if(n==19)
     printf("Perfect: 137438691328!\n");
     else if(n==31)
     printf("Perfect: 2305843008139952128!\n");
     else
     {
         if(store[n]==0)
         printf("Given number is prime. But, NO perfect number is available.\n");
         else
         printf("Given number is NOT prime! NO perfect number is available.\n");
     }
    }
    return 0;
}
