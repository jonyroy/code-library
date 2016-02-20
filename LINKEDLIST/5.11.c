#include<stdio.h>
#include<stdbool.h>
int info[20]={0,0,5,12,0,9,15,25,18,0,20};
int link[20]={0,0,5,6,0,3,8,2,10,0,7};
int avail[20]={0,4,0,0,9,0,0,0,0,0,0};
int main()
{

    int start,ptr;
    printf("Enter Start=");
    scanf("%d",&start);
    ptr=link[start];
    while(ptr!=start)
    {
        printf("%d\n",info[ptr]);
        ptr=link[ptr];
    }
    return 0;
}
