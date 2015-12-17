//Accepted
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
 int store[15005]={0,1};
int fibbonacci()
{
     int i;
    for(i=2;i<=15000;i++)
    {
        store[i]=(store[i-1]+store[i-2])%10000;
    }
}
int main()
{
    fibbonacci();
    int a,b,m,T,i,len,j;
    int n,sum,p;
    char buff[10],d[10];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d%d",&a,&b,&n,&m);
        p=n%15000;
        if(p==0)
        {
            sum=a%(int)pow((double)10,(double)m);
            printf("%d\n",sum);
            continue;
        }
        sum=a*store[p-1]+b*store[p];
        sprintf(buff,"%d",sum);
        len=strlen(buff);
        if(len<=m)
        printf("%s\n",buff);
        else
        {
            len--;
            for(p=1;p<=m;p++)
            {
                d[p]=buff[len];
                len--;
            }
            j=0;
            for(p=p-1;p>=1;p--)
            buff[j++]=d[p];
            buff[j]='\0';
            sum=atol(buff);
            printf("%d\n",sum);
        }
    }
    return 0;
}
