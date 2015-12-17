#include<stdio.h>
int main()
{
int hex[100],decimal,T,binary,count,countdown,deci,j,b,i,val;
scanf("%ld",&T);
while(T)
{
    count=0;
    scanf("%ld",&decimal);
    deci=decimal;
     while(decimal!=0)
      {
      binary=decimal%2;
      val=decimal/2;
      if(binary==1)
      count++;
      decimal=val;
      }
      i=1;
      while(deci!=0)
      {
          hex[i++]=deci%16;
          val=deci/16;
          deci=val;
      }
      countdown=0;
     for(j=1;j<=i-1;j++)
     {
         while(hex[j]!=0)
         {
             b=hex[j]%2;
             printf("%d",b);
             val=hex[j]/2;
             if(b==1)
             countdown++;
             hex[j]=val;
         }
         printf("\n");
     }
     printf("%d %d\n",count,countdown);
    T--;
}
return 0;
}
