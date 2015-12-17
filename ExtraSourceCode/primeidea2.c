#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int N=5000;
bool isPrime(int i)
{
int sqrtI=(int)(sqrt((double)i)),j;
for(j=2;j<=sqrtI;j++)
{
if(i%j==0)
return false;
}
return true;
}
int main()
{
    int i;
for(i=2;i<=N;i++)
{
if(isPrime(i)==true)
printf("%d ",i);
}
return 0;
}
