#include<stdio.h>
#include<stdbool.h>
int info[20]={0,0,5,12,0,9,15,25,18,0,20};
int link[20]={0,0,5,6,0,3,8,0,10,0,7};
int avail[20]={0,4,0,0,9,0,0,0,0,0,0};
int INSLOC(int start,int ava,int loc,int item)
{
    int n;
    if(ava==0)
    {
        printf("OVERFLOW\n");
        return 0;
    }
    n=ava;
    ava=link[ava];
    info[n]=item;
    if(loc==0)
    {
        link[n]=start;
        start=n;
    }
    else
    {
        link[n]=link[loc];
        link[loc]=n;
    }
    return 0;
}
int main()
{
    int start,ava,loc,item;
    printf("Enter Start=");
    scanf("%d",&start);
    printf("Enter Available=");
    scanf("%d",&ava);
    printf("Enter Location=");
    scanf("%d",&loc);
    printf("Enter Item=");
    scanf("%d",&item);
    INSLOC(start,ava,loc,item);
    int i=1;
    while(start>0)
    {
        printf("%d. %d\n",i,info[start]);
        start=link[start];
        i++;
    }
    return 0;
}
