//Accepted
#include<stdio.h>
long int cyclelen(long int n, long mm)
{
    long int count=1;
    while(n!=1)
    {
        if(n%2==1)
        {
            n=n*3+1;
            if(n>mm)
            {
            break;
            }
            count++;
        }
        else
        {
        n=n/2;
        count++;
        }
    }
    return count;
}
int main()
{
long int min,max,i=1,receive,A,limit;
while(scanf("%ld%ld",&min,&max)!=EOF)
{
    if(min<0&&max<0)
    break;
    A=min;
    limit=max;
receive=cyclelen(min,max);
printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",i,A,limit,receive);
i++;
}
    return 0;
}
