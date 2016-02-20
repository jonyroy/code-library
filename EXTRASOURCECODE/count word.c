#include<stdio.h>
#include<ctype.h>
int main()
{
char para[20][100];
char ch;
int i=0,j=0,line=0,count=0,punc=0,xc=0;
//freopen("opo.txt","r",stdin);
//freopen("D:\\pop.txt","w",stdout);
while((ch=getchar())!=EOF)
{
if(ch!='\n')
{
xc++;
if(ispunct(ch))
punc++;
if(((para[i][j-1])==32)||(j==0))
{
if(isalnum(ch))
{
count++;
}
}
para[i][j++]=ch;
}
else
{
para[i++][j]='\0';
line++;
j=0;
}
}
for(i=0;i<line;i++)
printf("\n%s",para[i]);
printf("\nlines=%d\nwords=%d\nNo. of characters:%d\npunctuation maks:%d",line,count,xc,punc);
return 0;
}
