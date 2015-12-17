#include<stdio.h>
#include<string.h>
int main()
{
    char number1[10000]={},number2[10000]={};
    char rev1[10000]={},rev2[10000]={},sum[10000];
    long int len1,len2,i,j,k,temp,carry;
    int digit,n;
    scanf("%d",&n);
    len1=0;
    while(n)
    {
    scanf("%s",number2);
    len2=strlen(number2);
    /*k=0;
    for(i=len1-1;i>=0;i--)
    {
      rev1[k++]=number1[i];
    }*/
    k=0;
    for(i=len2-1;i>=0;i--)
    {
      rev2[k++]=number2[i];
    }
    if(len1>len2)
    temp=len1;
    else
    temp=len2;
    carry=0;
    for(i=0;i<temp;i++)
    {
        if(rev1[i]=='\0')
        rev1[i]='0';
        else
        if(rev2[i]=='\0')
        rev2[i]='0';
      digit=(rev1[i]-48)+(rev2[i]-48)+carry;
      sum[i]=digit%10+48;
      carry=digit/10;
    }
    if(carry>0)
    {
    sum[i]=carry+48;
    i++;
    }
    for(j=0;j<i;j++)
    rev1[i]=sum[i];
    len1=i;
    n--;
    }
    for(j=i-1;j>=0;j--)
    printf("%c",rev1[j]);
    return 0;
}
