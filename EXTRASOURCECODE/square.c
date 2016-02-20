#include<stdio.h>
int main()
{
    int i=1,j,a,d,n,t,l=1;
    printf("\nEnter Value: ");
    scanf("%d",&a);
    d=a;
    while(i<=a+1)
    {

        j=1;
        while(j<=d)
        {
            printf(" ");
            j++;
        }
        t=1;
        while(t<=l)
        {
            printf("0");
            t++;
        }
        printf("\n");
        i++;
        d--;
        l+=2;
    }
    return 0;
}
