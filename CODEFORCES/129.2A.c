//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    long int n,a[100005],i,j,min=2100000000,count;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld",&a[i]);
        if(min>a[i])
        {
            min=a[i];
            j=i;
        }
    }
    //printf("%ld\n",min);
    count=0;
    for(i=1;i<=n;i++)
    {
        if(min==a[i])
        count++;
    }
    if(count>1)
    printf("Still Rozdil\n");
    else
    printf("%ld\n",j);
    return 0;
}
