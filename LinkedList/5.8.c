#include<stdio.h>
#include<stdbool.h>
int info[20]={0,0,5,12,0,9,15,25,18,0,20};
int link[20]={0,0,5,6,0,3,8,0,10,0,7};
int avail[20]={0,4,0,0,9,0,0,0,0,0,0};
int main()
{
    int start,ava,loc,locp,i=1;
    printf("Enter Start=");
    scanf("%d",&start);
    printf("Enter Available=");
    scanf("%d",&ava);
    printf("Enter Location=");
    scanf("%d",&loc);
    printf("Enter Previous Location=");
    scanf("%d",&locp);
    if(locp==0)
    start=link[start];
    else
    link[locp]=link[loc];
    link[loc]=ava;
    ava=loc;
    while(start>0)
    {
        printf("%d. %d\n",i,info[start]);
        start=link[start];
        i++;
    }
    return 0;
}
