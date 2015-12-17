#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(long int i)
{
long  int j;
for(j=2;j<i;j++)
{
if(i%j==0)
return 0;
}
return 1;
}
int main()
{
long int i;
long int N;
scanf("%ld",&N);
for(i=2;i<=N;i++)
{
if(isPrime(i)==1)
printf("%ld ",i);
}
return 0;
}
