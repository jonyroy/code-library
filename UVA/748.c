//Accepted
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAX 10000
int rev(char *a,char *b)
{
    int len,i,j=0;
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    b[j]='\0';
    return 0;
}
int copystring(char *store,char *original)
{
    while(*store++=*original++);
    return 0;
}
int mul_int(char *a,long int b,char *c)
{
    char d[MAX],e[MAX];
    int length,i,carry,tem;
    length=strlen(a);
    rev(a,d);
    carry=0;
    for(i=0;i<length;i++)
    {
        tem=(d[i]-48)*b+carry;
        e[i]=tem%10+48;
        carry=tem/10;
    }
   while(carry!=0)
    {
        e[i]=(carry%10)+48;
        carry=carry/10;
        i++;
    }
    e[i]='\0';
    rev(e,c);
    return 0;
}
int power(char *B,long int P,char *result)
{
    char A[MAX]={"1"};
    long int i,p;
    p=atol(B);
    for(i=1;i<=P;i++)
    {
     mul_int(A,p,result);
     copystring(A,result);
    }
    return 0;
}
int main()
{
    char A[MAX],b[MAX],rz[MAX];
    long int N,i,len,j,a;
    while(scanf("%s%ld",rz,&N)!=EOF)
    {
       len=strlen(rz);
       i=0;
       while(rz[i]!='.')
       {
           b[i]=rz[i];
           i++;
       }
       j=0;
       i=i+1;
       while(rz[i]!='\0')
       {
           b[i-1]=rz[i];
           i++;
           j++;
       }
       b[i]='\0';
       power(b,N,A);
       len=strlen(A);
       i=0;
       while(A[len-1]=='0')
       {
           len--;
           i++;
       }
       a=N*j-i;
       if(len<a)
       {
           j=a-len;
           printf(".");
           for(i=1;i<=j;i++)
           printf("0");
           for(i=0;i<len;i++)
           printf("%c",A[i]);
           printf("\n");
       }
       else
       {
           j=len-a;
           for(i=0;i<j;i++)
           {
            printf("%c",A[i]);
           }
           printf(".");
           for(i=i;i<len;i++)
           printf("%c",A[i]);
           printf("\n");
       }
    }
    return 0;
}
