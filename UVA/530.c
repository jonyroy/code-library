//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 105
long double n,k,sum,c;
int main(void)
{
	while(scanf("%Lf %Lf",&n,&k))
	{
		if(n==0)
		break;
		if(k> n-k)
		k=n-k;
		sum=1;
		for(c=k;c>0;c--,n--)
		sum*=n;
		for(;k>1;k--)
		sum/=k;
		printf("%.0Lf\n",sum);
	}
	return 0;
}
