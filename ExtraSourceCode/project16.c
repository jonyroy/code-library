#include<stdio.h>
int main()
{
    int n[20],i=0,j=0,a,m;
    printf("\nEnter The Calculate Number=");
    scanf("%d",&a);
    printf("\nEnter The Numbers=");
    while(i<=a)
    {
        scanf("%d",&n[i]);
        i++;
    }
    m=n[0];
    while(j<=a-1)
    {
        if(m>n[j+1])
        {
        m=n[j];
        }
        else
        {
            m=n[j+1];
        }
        j++;
    }
    printf("\n%d",m);
    return 0;
}
