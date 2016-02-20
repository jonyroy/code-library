#include <stdio.h>
#include <string.h>
char ascii[26];
char factorials[21];
unsigned long long int results[21];
int main()
{
	unsigned long long int res;
	register int i,j,cc;
	cc = 1;
	int c;
	char s[21];
	results[2]=2;
	for(i=3;i<21;i++)results[i]=results[i-1]*i;
	scanf("%d",&c);
	getchar();
	while(c-->0)
	{
		res = 1;
		gets(s);
		for(j=0;j<=20;j++)factorials[j]=0;
		for(i=0;i<26;i++)ascii[i]=0;
		i = strlen(s);
		for(j=0;j<i;j++)
			ascii[s[j]-'A']++;
		for(j=0;j<26;j++)
			factorials[ascii[j]]++;
		res = results[i];
		for(j=2;j<=20;j++)
			for(i=1;i<=factorials[j];i++)
				res/=results[j];
		printf("Data set %d: %llu\n",cc++,res);
	}
	return 0;
}
