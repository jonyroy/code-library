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
    int start,item,i;
    printf("Enter Start=");
    scanf("%d",&start);
    printf("Enter Item=");
    scanf("%d",&item);
    FINDB(start,item);
    printf("%d %d\n",loc,locp);
    return 0;
}
