//Accepted
#include<stdio.h>
#include<math.h>
#include<string.h>
long long store[200]={0,1,2};
int binary(long long int a)
{
    int i,j,k;
        i=1;
        j=91;
        while(i<j)
        {
            k=(i+j)/2;
            if(a==store[k])
            return k;
            else if(a>store[k])
            i=k+1;
            else
            j=k;
        }
    return i-1;
}
int main()
{


    int i,j,k,l=1;
    long long int a[100],n;
    for(i=3;i<=91;i++)
    {
        store[i]=store[i-1]+store[i-2];
    }
    while(scanf("%lld",&n)!=EOF)
    {
        k=binary(n);
        j=1;
        printf("%lld\n",n);
        for(i=k;i>=1;i--)
        {
            if(n>=store[i])
            {
                printf("%d ",i);
                n=n-store[i];
                a[j]=store[i];
                if(n==0)
                break;
                j++;
            }
        }
        printf("\n");
        for(i=1;i<=j;i++)
        {
            printf("%lld ",a[i]);
        }
        printf("\n\n");
    }
    return 0;
}
