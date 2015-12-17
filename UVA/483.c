//Accepted
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define MAX 1000
int rev(char *a,char *b)
{
    int len,i,j=0;
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    b[j]='\0';
    return 0;
}
int main()
{
    char line[MAX],re[MAX],ch[MAX];
    int a,b,i,len,j,k;
    bool test;
    while(gets(line))
    {
        j=0;
      len=strlen(line);
      i=0;
      while(i<len)
      {
          j=0;
        while(line[i]!=32)
        {
        re[j++]=line[i++];
        }
        re[j]='\0';
        rev(re,ch);
        printf("%s",ch);
        if(line[i]==32&&i<len)
        printf("%c",line[i]);
        i++;
      }
      printf("\n");
    }
    return 0;
}
