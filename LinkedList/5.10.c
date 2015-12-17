#include<stdio.h>
#include<stdbool.h>
int info[20]={0,0,5,12,0,9,15,25,18,0,20};
int link[20]={0,0,5,6,0,3,8,0,10,0,7};
int avail[20]={0,4,0,0,9,0,0,0,0,0,0};
int loc,locp;
int FINDB(int start,int item)
{
    int save,ptr;
    if(start==0)
    {
        loc=0;
        locp=0;
        return 0;
    }
    if(info[start]==item)
    {
        loc=start;
        locp=0;
        return 0;
    }
    save=start;
    ptr=link[start];
    while(ptr>0)
    {
        if(info[ptr]==item)
        {
            loc=ptr;
            locp=save;
            return 0;
        }
        save=ptr;
        ptr=link[ptr];
    }
    loc=0;
    locp=0;
    return 0;
}
int main()
{
    int start,item,i=1,ava;
    printf("Enter Start=");
    scanf("%d",&start);
    printf("Enter Item=");
    scanf("%d",&item);
    printf("Enter Available=");
    scanf("%d",&ava);
    FINDB(start,item);
    if(loc==0)
    {
    printf("ITEM Not In The List.\n");
    return 0;
    }
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
