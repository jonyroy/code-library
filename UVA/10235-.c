//Acceted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 10000000
int store[MAX]={0};
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
int main()
{
    long int i,j,n,m,len;
    char number[100],jony[100];
    for(i=3;i<=(long)sqrt((double)MAX);i+=2)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=MAX;j+=i+i)
          {
              store[j]=1;
          }
      }
    }
    while(scanf("%s",number)!=EOF)
    {
    m=atol(number);
    rev(number,jony);
    n=atol(jony);
    if(m==2)
    printf("%ld is prime.\n",m);
    else
    {
       if(m%2==0)
       printf("%ld is not prime.\n",m);
       else
       {
       if(n%2==0&&store[m]==0)
       printf("%ld is prime.\n",m);
       else
       if(m!=n&&store[m]==0&&store[n]==0)
       printf("%ld is emirp.\n",m);
       else
       if(store[m]==0)
       printf("%ld is prime.\n",m);
       else
       printf("%ld is not prime.\n",m);
       }
    }
    }
    return 0;
}
