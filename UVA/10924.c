#include<stdio.h>
#include<string.h>
int main()
{
    char prime[50];
    int i,len,count,sum,su,suma,a,b;
    while((scanf("%s",prime))!=EOF)
    {
        count=0;
        su=0;
        b=0;
        len=strlen(prime);
        printf("%d\n",len);
      for(i=0;i<len;i++)
      {
          if(prime[i]>64&&prime[i]<91)
          {
          sum=prime[i];
          su=su+sum-38;
          }
          if(prime[i]>96&&prime[i]<123)
          {
          suma=prime[i];
          count=count+suma-96;
          }
      }
      a=count+su;
      printf("%d\n",a);
      for(i=1;i<=a;i++)
      {
          if(a%i==0)
          b++;
      }
      if(b==2)
      printf("It is a prime word.\n");
      else
      printf("It is not a prime word.\n");
    }
    return 0;
}
