#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int N=3100000,status[10000000]={0};
int main()
{
   int i,j,sqrtN;
   long int sum=2;
//   sqrtN=(int)(sqrt((double)N));
   for(i=3;i*i<=N;i+=2)
    {
      if(status[i]==0)
        {
          for(j=i*i;j<=N;j+=i+i)
             status[j]=1;
        }
    }
//   printf("2 ");
   int count=1;
   for(i=3;i<=N;i+=2)
     {
       if(status[i]==0&&i<=2000000)
//       if(i<2000000)
        sum+=i;
     }
   printf("%ld\n",sum);
  return 0;
}
