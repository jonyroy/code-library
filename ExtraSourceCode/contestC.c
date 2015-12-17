#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int n,w[1000],i,result;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=1;i<n;i++)
    {

        result=gcd(w[i],w[i+1]);
        w[i+1]=result;
    }
    printf("%d\n",result);
    return 0;
}
int gcd(int a,int b)
{
    int i,x,y,r;
    x=a;
    y=b;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}
