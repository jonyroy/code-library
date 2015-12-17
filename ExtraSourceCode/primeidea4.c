#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int N = 5000;
int status[5001];
int main()
{
int i, j;
for( i = 2; i <= N; i++ )
status[i] = 0;
for( i = 2; i <= N; i++ )
{
if( status[i] == 0 )
{
for( j = 2 * i; j <= N; j += i )
status[j] = 1;
}
}
for( i = 2; i <= N; i++ )
{
if( status[i] == 0 )
{
printf("%d ", i);
}
}
return 0;
}
