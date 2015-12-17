//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
 long int R,N,i,tem,count=1,a;
 while(scanf("%ld%ld",&R,&N))
 {
     if(R==0&&N==0)
     break;
     tem=R-N;
     if(tem<=0)
     {
      printf("Case %ld: 0\n",count);
      continue;
     }
     for(i=1;i<=26;i++)
     {
         a=N*i;
         if(a>=tem)
         {
             printf("Case %ld: %ld\n",count,i);
             break;
         }
     }
     if(i==27)
     printf("Case %ld: impossible\n",count);
     count++;
 }
 return 0;
}
