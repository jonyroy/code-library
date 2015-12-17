#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
long long gcd(long long a,long long b)
{
    long long d;
    if(a==0&&b==0)
    return 1;
    else if(a==0)
    return b;
    else if(b==0)
    return a;
    while(a%b!=0)
    {
        d=a%b;
        a=b;
        b=d;
    }
    return b;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    double a,x,de,no,kk,deno,nume;
    char b[50];
    long long int len,i,j,k,/*deno,nume,*/g,d,n,test=1,ll;
    long long int power=1,pw;
    while(1)
    {
    scanf("%lld",&j);
    if(j<0)
    break;
    power=1;
    pw=1;
    scanf("%s",b);
    len=strlen(b);
    x=atof(b);
    if(j==0)
    {
    i=len-2;
    for(k=1;k<=i;k++)
    {
        power=10*power;
    }
    kk=power*x;
    g=gcd(power,(long long)kk);
    d=(long long)kk/g;
    n=power/g;
    printf("Case %lld: %lld/%lld\n",test,d,n);
    test++;
    }
    else
    {
    k=len-(j+2);
    for(i=1;i<=k;i++)
    {
        pw=pw*10;
    }
    for(i=1;i<=j+k;i++)
    {
        power=power*10;
    }
    de=power*x;
    printf("%lf\n",de);
    no=pw*x;
    printf("%lf\n",no);
    deno=(de-no);
    nume=power-pw;
    g=gcd(ceil(nume),ceil(deno));
    d=deno/g;
    n=nume/g;
    printf("Case %lld: %lld/%lld\n",test,d,n);
    test++;
    }
    }
    return 0;
}
