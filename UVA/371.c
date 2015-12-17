//Accepted
#include<stdio.h>
#include<math.h>
long long int cyclelen(long long int n)
{
    long long int count=0;
   do
    {
        if(n%2==1)
        {
            n=n*3+1;
        }
        else
        n=n/2;
        count++;
    }  while(n!=1);
    return count;
}
int main()
{
    long long int L,H,V,S,i,j,k,tem,n,min,max;
    while(scanf("%lld%lld",&L,&H))
    {
        if(L==0&&H==0)
        break;
       if(L<H)
        {
            min=L;
            max=H;
        }
        else
        {
            min=H;
            max=L;
        }
        n=0;
    for(i=min;i<=max;i++)
    {
        j=i;
        tem=cyclelen(j);
        if(tem>n)
        {
        n=tem;
        k=i;
        }
    }
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",min,max,k,n);
    }
    return 0;
}
