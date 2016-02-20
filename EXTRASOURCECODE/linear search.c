#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int store[1000],i,j,k,item,T,hold;
    bool test=false;
    printf("Enter How many Data You Have:");
    scanf("%d",&T);
    printf("\nEnter %d Data:\n",T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&store[i]);
    }
    printf("\nEnter Data Which Wanna Search:");
    scanf("%d",&item);
    for(i=1;i<=T;i++)
    {
        if(item==store[i])
        {
            test=true;
            hold=i;
            break;
        }
    }
    if(test==true)
    {
        printf("Your Inserted Data Is at %dth Position.\n",hold);
    }
    else
    printf("Your Inserted Data Is Not Found.\n");
    return 0;
}
