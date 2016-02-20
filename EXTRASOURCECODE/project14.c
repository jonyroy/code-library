#include<stdio.h>
int main()
{
    int i[20],j,k;
    printf("\nEnter The Digit Number:");
    for(j=0;j<10;j++)
    {
        scanf("%d",&i[j]);
    }
    k=i[0];
    for(j=0;j<9;j++)
    {
     if(k>i[j+1])
     {
           k=i[j];
     i[j]=k;
     }

     else
     i[j]=i[j+1];
    }
    printf("\n%",i[j]);
    return 0;
}
