#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    int link[20]={0,3,7,2,6,9,0,8,5,10,4};
    int info[20]={0,5,15,10,100,50,200,30,40,60,70};
    int i,j,start=1;
    bool test=false;
    printf("Searched Item=");
    scanf("%d",&j);
    printf("Start=");
    scanf("%d",&start);
    while(start>0)
    {
        if(j<info[start])
        {
        printf("Searched Unsuccesfull.\n");
        test=true;
        break;
        }
        else if(j==info[start])
        {
            printf("Found at %d\n",start);
            test=true;
            break;
        }
        else
        {
        start=link[start];
        }
    }
    if(test==false)
    printf("Searched Unsuccesfull.\n");
    return 0;
}
