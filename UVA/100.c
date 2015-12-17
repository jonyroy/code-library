/*
   Accepted
   Be Happy...............
*/
#include<stdio.h>
#include<math.h>
long int cyclelen(long int n);
long int maximam(long int min,long int max);
int main()
{
long int min,max,i,temp,n,m;
while(scanf("%ld%ld",&min,&max)!=EOF)
{
    n=min;
    m=max;
    if(min>max)
    {
        temp=min;
        min=max;
        max=temp;
    }
    i=maximam(min,max);
 printf("%ld %ld %ld\n",n,m,i);
}
    return 0;
}
long int cyclelen(long int n)
{
    long int count=1;
    while(n!=1)
    {
        if(n%2==1)
        {
            n=n*3+1;
        }
        else
        n=n/2;
        count++;
    }
    return count;
}
long int maximam(long int min,long int max)
{
    long int i,temp;
    long int n=cyclelen(max);
    for(i=min;i<max;i++)
    {
        temp=cyclelen(i);
        if(temp>n)
        n=temp;
    }
    return n;
}
