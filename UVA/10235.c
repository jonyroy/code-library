//Time Limit Exceed
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char prime[100],rev[100];
    long int a,b,c,j,i,k,count,countdown,co,cow,cw,len,m,n;
    while(scanf("%s",prime)!=EOF)
    {
        j=0;
        a=atol(prime);
        c=a;
        len=strlen(prime);
     for(i=len-1;i>=0;i--)
     {
        rev[j++]=prime[i];
     }
     rev[j]='\0';
     b=atol(rev);
     n=sqrt(a);
     m=sqrt(b);
         for(j=1;j<=i;j++)
         {
             if(i%j==0)
             count++;
         }
         if(count==2)
         {
             countdown++;
            if(a%i!=0)
            {
                co++;
            }
         }
     }
     if(countdown!=co)
     {
     printf("%ld is not prime.\n",c);
     continue;
     }
     cow=0;
     cw=0;
     for(i=1;i<=m;i++)
     {
         count=0;
         for(j=1;j<=i;j++)
         {
             if(i%j==0)
             count++;
         }
         if(count==2)
         {
             cow++;
            if(b%i!=0)
            {
                cw++;
            }
         }
     }
     if(co==countdown&&cow==cw)
     printf("%ld is emirp.\n",c);
     else
     printf("%ld is prime.\n",c);
     }
    return 0;
}
