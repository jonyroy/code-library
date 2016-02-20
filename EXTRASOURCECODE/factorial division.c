#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int prime_fact(int n,int a[])
{
    int i,k=1,j,l;
    for(l=2;l<=n;l++)
    {
        k=1;
        j=l;
    for(i=2;i<=j;i)
    {
    if(j%i==0)
    {
    a[i]=a[i]+1;
    j=j/i;
    }
    else
    {
    i=2*k+1;
    k++;
    }
    if(j==1)
    break;
    }
    }
    return i;
}
int main()
{

    int l=1,i,j,k=1,p,q,tem,n,m;
    long long int sum=1;
    printf("n\n");
    printf(" C\n");
    printf("  r\n");
    while(scanf("%d%d",&n,&m)!=EOF)
    {
    int a[100]={0},b[100]={0},c[100]={0},d[100]={0};
    sum=1;
    prime_fact(m,b);
    prime_fact(n,a);
    for(i=1;i<=50;i++)
    {
        c[i]=a[i]-b[i];
        sum=sum*pow(i,c[i]);
    }
    printf("%lld\n",sum);
    }
    return 0;
}
