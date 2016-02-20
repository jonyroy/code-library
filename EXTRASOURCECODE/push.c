#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define MAX 10
int stack[MAX];
int top=-1,i;
int push(int item)
{
    if(top==MAX-1)
    printf("Overflow.\n");
    else
    {
        stack[++top]=item;
    }
    return 0;
}
int pop()
{
    int item;
    if(top<0)
    return -1;
    else
    {
        item=stack[top--];
    }
    return item;
}
int main()
{
    int item,n;
    printf("Enter Push For 1.\n");
    printf("Enter Pop For 2.\n");
    while(1)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("Push=");
            scanf("%d",&item);
            push(item);
        }
        else if(n==2)
        {
            printf("Pop=");
            i=pop();
            if(i==-1)
            printf("Underflow.\n");
            else
            printf("%d\n",i);
        }
        else
        return 0;
    }
    return 0;
}
