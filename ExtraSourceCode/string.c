#include<stdio.h>
#include<ctype.h>
int main()
{
char para[20][100];
char ch;
int i=0,j=0,status=1;
while((ch=getchar())!=EOF)
{
if(ch!='\n')
{
if(((para[i][j-1])==32)||(j==0))
{
if(isalnum(ch))
{
if((isupper(ch))==0)
status=0;
}
}
para[i][j++]=ch;
}
else
{
para[i++][j]='\0';
j=0;
}
}
(status==1)?printf("\nEach word begins with Uppercase."):printf("\nEach word doesn't beginwith Uppercase.");
return 0;
}
