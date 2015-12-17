#include<stdio.h>
int main()
{
    int lumber[15],i,j,n,count,countdown;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while(n)
    {
        count=0;
        countdown=0;
        for(i=1;i<=10;i++)
        {
            scanf("%d",&lumber[i]);
        }
        for(i=1;i<=9;i++)
        {
            if(lumber[i]>=lumber[i+1])
            count++;
            if(lumber[i]<=lumber[i+1])
            countdown++;
        }
        if(count==9||countdown==9)
        printf("Ordered\n");
        else
        printf("Unordered\n");
        n--;
    }
    return 0;
}
