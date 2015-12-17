//Accepted
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	long double x, y;
	char a[10000],b[10000],c;
	while(scanf("%s%*c%c%s",a,&c,b)==3)
	 {
		x=atof(a);
		y=atof(b);
		printf("%s %c %s\n",a,c,b);
		if (x>2147483647)
			printf("first number too big\n");
		if (y>2147483647)
			printf("second number too big\n");
		if (c=='+')
		{
			x=x+y;
			if(x>2147483647)
			printf("result too big\n");
		}
		else
		{
			x=x*y;
			if(x>2147483647)
			printf("result too big\n");
		}
	}
	return 0;
}
**************************************************************
int main()
{
double n1,n2,result;
char input[1000],ch[3];
while(gets(input))
{
sscanf(input,"%lf%s%lf",&n1,ch,&n2);
printf("%s\n",input);
if(n1>2147483647)
printf("first number too big\n");
if(n2>2147483647)
printf("second number too big\n");
if(ch[0]=='+')
result=n1+n2;
else
result=n1*n2;
if(result>2147483647)
printf("result too big\n");
}
}
