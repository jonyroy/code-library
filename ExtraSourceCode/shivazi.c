#include<stdio.h>
int main()
{
    int grade[5],i,sum=0;
    float average ;
    for(i=0;i<5;i++)
    {
        printf("\nEnter grade[%d]:",i+1);
        scanf("%d",&grade[i]);
        sum=sum+grade[i];
    }
    average=(float)(sum)/5.0;
    printf("Average is:%f",average);
    return 0;
}

