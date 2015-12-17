#include<algorithm>
#include<stdio.h>
long int a[2000005],i,n;
using namespace std;
int main()
{
    while (scanf("%ld",&n)!=EOF)
    {
        if(n==0)
        break;
        for (i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
        }
        sort(a,a+n);
        for (i=0;i<n;i++)
        {
        printf("%ld",a[i]);
        if(i<n-1)
        printf(" ");
        }
        printf("\n");
    }
    return 0;
}
