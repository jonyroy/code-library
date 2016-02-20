/*[No Subject]
Hide Details

FROM:

        Shamia Afrin Mou

TO:

        jony_royice@yahoo.com

Message flagged
Friday, May 25, 2012 7:16 AM
ame pagol hoa jabo bujli ay program jode aj rater vitore milate na pare*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[200],b;
int l,n,i,line=0,word=0,count=0,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
gets(a);
//printf("%s",a);
//printf("\n");
}
l=strlen(a);
printf("\nLength=%d\n",l);
for(i=0;i<l;i++)
{
b=a[i];
count=1;
for(j=i+1;j<l;j++)
{
if(b==n[j])
{
count++;
n[j]=0;
}
if(n[i]=='\n')
{
line++;
}
if(n[i]==' ')
{
word++;
}
if(n[i]!=0)
printf("%c=%d",n[i],count);
printf("\nLine%d=",line);
printf("\nword=%d",word);
}
}
getch();
}

