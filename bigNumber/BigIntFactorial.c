#include<stdio.h>
#include<string.h>
#define MAX 10000
int main()
{
    long int i,j,k,len1,len2,carry,tem,t;
    char a[MAX],b[MAX],c[MAX],tem1[MAX],tem2[MAX];
    while((scanf("%s%s",a,b))!=EOF)
    {
       len1=strlen(a);
       len2=strlen(b);
       for(i=0;i<=len1+len2+5;i++)
       c[i]='0';
       for(i=0;i<len1;i++)
       {
           tem1[i]=a[len1-i-1];
       }
       for(i=0;i<len2;i++)
       {
           tem2[i]=b[len2-1-i];
       }
       for(i=0;i<len1;i++)
       {
           carry=0;
           for(j=0;j<len2;j++)
           {
               tem=(tem1[i]-48)*(tem2[j]-48)+c[i+j]-48+carry;
               c[i+j]=(tem%10)+48;
               carry=tem/10;
           }
            t=i+j;
           if(carry>0)
           {
               c[t++]=carry+48;
           }
       }
      for(i=t-1;i>=0;i--)
      printf("%c",c[i]);
      printf("\n");
    }
    return 0;
}
