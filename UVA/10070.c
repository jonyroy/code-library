//Accepted
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
#define MAX 1000000
char year[MAX];
int div_rem(char *dividend,int divisor)
{
    char quotient[MAX],q[MAX];
    int k,i,tem,remainder,len,j;
    len=strlen(dividend);
    remainder=0;
    for(i=0;i<len;i++)
    {
      tem=remainder*10+dividend[i]-48;
      quotient[i]=tem/divisor+48;
      remainder=tem%divisor;
    }
    quotient[i]='\0';
    len=strlen(quotient);
    i=0;
    while(quotient[i]<'1')
    {
        i++;
    }
    k=0;
    for(j=i;j<len;j++)
    {
        q[k++]=quotient[j];
    }
    q[k]='\0';
    return remainder;
}
int main()
{
     int i=1,m4,m400,m100,m15,m55;
     bool test,test1;
    while(scanf("%s",year)!=EOF)
    {
        test=false;
        test1=false;
        m4=div_rem(year,4);
        m100=div_rem(year,100);
        m400=div_rem(year,400);
        m15=div_rem(year,15);
        m55=div_rem(year,55);
        if(i>1)
        printf("\n");
        i++;
        if((m4==0&&m100!=0)||m400==0)
        {
         printf("This is leap year.\n");
         test=true;
         test1=true;
        }
        if(m15==0)
        {
            printf("This is huluculu festival year.\n");
            test=true;
        }
        if(m55==0&&test1==true)
        {
            printf("This is bulukulu festival year.\n");
            test=true;
        }
        if(test==false)
        printf("This is an ordinary year.\n");
    }
    return 0;
}
