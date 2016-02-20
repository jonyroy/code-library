#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int info[50]={0,400,5,0,3,300,80,0,40,200,50,0,60,0,20,0,10,0,70,0,100};
    int link[50]={0,20,6,0,8,18,16,0,12,1,5,0,14,0,0,0,4,0,2,0,10};
    int avail[50]={0,0,0,19,0,0,0,3,0,0,0,15,0,17,0,13,0,0,0,11,0};
    int ava,start,i=1,n,item;
    printf("Insert Available=");
    scanf("%d",&ava);
    printf("Insert Start=");
    scanf("%d",&start);
    printf("Insert Item=");
    scanf("%d",&item);
    if(ava==0)
    {
    printf("OVERFLOW\n");
    }
    else
    {
        n=ava;
        link[n]=start;
        info[n]=item;
        start=n;
    }
    while(start>0)
    {
        printf("%d. %d\n",i,info[start]);
        start=link[start];
        i++;
    }
    return 0;
}
