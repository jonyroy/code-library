//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char line[100],group[5],rev[100];
    int len,m,n,b,i,g,j,sum,k;
    while(1)
    {
      scanf("%d",&g);
      if(g==0)
      break;
      scanf("%s",line);
      len=strlen(line);
      m=len/g;
      n=0;
      b=m-1;
      k=0;
      sum=b;
      for(i=1;i<=g;i++)
      {
          for(j=1;j<=m;j++)
          {
              rev[k++]=line[b--];
          }
        sum=sum+m;
        b=sum;
      }
      rev[k]='\0';
      printf("%s\n",rev);
    }
    return 0;
}
