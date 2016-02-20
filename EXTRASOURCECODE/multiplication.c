#include<stdio.h>
#include<string.h>
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.FIL","w",stdout);
long long int i,j,k,len1,len2,t,carry;
char a[1000],b[1000],c[1000]={},first[1000],second[1000];
long long int mul;
while(1)
{
    scanf("%s",a);
    if(strcmp(a,"0")==0)
    break;
    scanf("%s",b);
len1=strlen(a);
len2=strlen(b);
j=0;
for(i=len1-1;i>=0;i--)
{
first[j++]=a[i];
}
j=0;
for(i=len2-1;i>=0;i--)
{
second[j++]=b[i];
}
k=0;
for(i=0;i<len2;i++)
{
carry=0;
t=k;
for(j=0;j<len1;j++)
{
if(c[t]=='\0')
c[t]='0';
mul=(first[j]-48)*(second[i]-48)+carry+c[t]-48;
c[t]=mul%10+48;
carry=mul/10;
t++;
}
if(carry>0)
{
c[t]=carry+48;
t++;
}
k++;
}
for(i=t-1;i>=0;i--)
printf("%c",c[i]);
printf("\n");
}
return 0;
}
