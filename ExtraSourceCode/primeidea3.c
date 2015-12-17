#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int N=5000;
bool isPrime(int i)
{
int sqrtI=(int)(sqrt((double)i)),j;
for(j=3;j<=sqrtI;j+=2)
{
if(i%j==0)
return false;
}
return true;
}
int main()
{
    int i;
printf("2 ");
for(i=3;i<=N;i+=2)
{
if(isPrime(i)==true)
printf("%d ",i);
}
return 0;
}
