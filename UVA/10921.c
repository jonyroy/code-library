//Accepted
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50],c[50];
    int i,len;
    while(gets(ch)!=0)
    {
     len=strlen(ch);
     for(i=0;i<len;i++)
      {
          if(ch[i]>='A'&&ch[i]<='C')
          c[i]='2';
          if(ch[i]>='D'&&ch[i]<='F')
          c[i]='3';
          if(ch[i]>='G'&&ch[i]<='I')
          c[i]='4';
          if(ch[i]>='J'&&ch[i]<='L')
          c[i]='5';
          if(ch[i]>='M'&&ch[i]<='O')
          c[i]='6';
          if(ch[i]>='P'&&ch[i]<='S')
          c[i]='7';
          if(ch[i]>='T'&&ch[i]<='V')
          c[i]='8';
          if(ch[i]>='W'&&ch[i]<='Z')
          c[i]='9';
          if(ch[i]=='0')
          c[i]='0';
          if(ch[i]=='1')
          c[i]='1';
          if(ch[i]=='-')
          c[i]='-';
      }
      c[len]='\0';
      printf("%s\n",c);
    }
return 0;
}
