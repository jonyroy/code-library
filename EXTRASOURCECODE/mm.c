#include<stdio.h>
#include<string.h>
void reverse(char from[100])
{
  int len=strlen(from);
  char to[100];
  int l;
  for(l=0;l<len;l++)
  to[l]=from[len-l-1];
  to[len]='\0';
  printf("%s\n",to);
}
int main ()
{
	long int x[100], y[100],test,M,sum,i,k,carry;
	char ch,s[100],ss[100];

	scanf("%ld",&test);

	while ( test-- ) {

       scanf("%ld",&M);
       for(i=0;i<M;i++)
       {
           scanf("%ld %ld",&x[i],&y[i]);

       }
       carry=0;
       k=0;
       if(M>0)
       for(i=M-1;i>=0;i--)
       {
           sum=x[i]+y[i]+carry;
           s[k++]=(sum%10)+'0';
           carry=sum/10;
       }
       s[k]=carry+'0';
       s[k+1]='\0';
       reverse(s);

	}

	return 0;
}
