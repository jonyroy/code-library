#include<stdio.h>
#include<stdbool.h>
int info[20]={0,0,5,12,0,9,15,25,18,0,20};
int link[20]={0,0,5,6,0,3,8,2,10,0,7};
int avail[20]={0,4,0,0,9,0,0,0,0,0,0};
int loc,locp;
int FINDBHL(int start,int item)
{

    int save,ptr;
    save=start;
    ptr=link[start];
    while(ptr!=start&&info[ptr]!=item)
    {
        save=ptr;
        ptr=link[ptr];
    }
    if(info[ptr]==item)
    {
    loc=ptr;
    locp=save;
    }
    else
    {
        loc=0;
        locp=save;
    }
    return 0;
}
int main()
{
    int start,item,ava;
    printf("Enter Start=");
    scanf("%d",&start);
    printf("Enter Item=");
    scanf("%d",&item);
    printf("Enter Available=");
    scanf("%d",&ava);
    FINDBHL(start,item);
    if(loc==0)
    {
    printf("Item Not In The List.\n");
    return 0;
    }
    link[locp]=link[loc];
    link[loc]=ava;
    ava=loc;
    return 0;
}

