#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
#define MAX 1000
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
int multiplication(char *a,char *b,char *m)
{
    long int len1,len2,i,carry,k,t,j,mul;
    char F[MAX],S[MAX],tem[MAX];
    len1=strlen(a);
    len2=strlen(b);
    rev(a,F);
    rev(b,S);
    k=0;
    for(i=0;i<len1+len2;i++)
    {
        tem[i]='0';
    }
    for(i=0;i<len1;i++)
    {
        t=k;
        carry=0;
        for(j=0;j<len2;j++)
        {
            mul=(F[i]-'0')*(S[j]-'0')+carry+tem[t]-'0';
            tem[t]=mul%10+'0';
            carry=mul/10;
            t++;
        }
        if(carry>0)
        {
        tem[t]=carry+'0';
        t++;
        }
        k++;
    }
    tem[t]='\0';
    rev(tem,m);
    return 0;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char a[MAX],b[MAX],m[MAX],n[MAX];
    long int i,l;
    time_t start_time,end_time;
    while(1)
     {
        scanf("%s",a);
        if(strcmp(a,"0")==0)
        break;
        scanf("%s",b);
        time(&start_time);
        multiplication(a,b,m);
        time(&end_time);
        printf("%s\n",m);
        printf("Proccess Time=%d sec.\n",start_time-end_time);
    }
    return 0;
}
