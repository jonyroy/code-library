//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 1000005
char s[MAX];
int x[MAX],y[MAX];
int main ()
{
	long int test,sum,i,j,carry,k;
	long int length;
	int a,b;
    scanf("%ld",&test);
    k=1;
    while(k<=test)
    {
        scanf("%ld",&length);
        for(i=0;i<length;i++)
        {
            scanf("%d%d",&a,&b);
            x[i]=a;
            y[i]=b;
        }
        carry=0;
        for(j=length-1;j>=0;j--)
        {
            sum=x[j]+y[j]+carry;
            carry=sum/10;
            s[j]=sum%10+48;
        }
        s[length]='\0';
        printf("%s\n",s);
        if(k<test)
        printf("\n");
        k++;
    }
	return 0;
}
