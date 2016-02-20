#include<stdio.h>
#include<string.h>
int main()
{
    long int a[1000],i,j,k,n,x;
    while(scanf("%ld",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        scanf("%ld",&a[i]);
        printf("Enter Value To Find:");
        scanf("%ld",&x);
        i=1;
        j=n;
        while(i<j)
        {
            k=(i+j)/2;
            if(x>a[k])
            i=k+1;
            else
            j=k;
        }
        if(x==a[i])
        printf("\nThe Position of given number is %ld:",i);
        else
        printf("The Number is not in the list.");
        printf("\n");
    }
    return 0;
}
