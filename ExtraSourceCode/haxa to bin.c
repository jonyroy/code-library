#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int i=0;
char converted[100];
int count(char ch,char *hexa);
int bitodeci(char *bi)
{
    int i,j,sum=0,len;
    char a[5];
    for(i=0;i<13;i++)
    {
        a[0]=bi[i];
        a[1]='\0';
        len=atoi(a);
        sum=sum+len*(int)pow(2,i);
    }
    return sum;
}
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
int base(int n)
{
    int r,c,b=2;
    if(n==0)
    return 0;
    c=n/b;
    r=n-b*c;
    n=c;
    base(n);
    converted[i++]=r+48;
}
int main()
{
    char hexa[100],ch[100],s[10],str[10],h[100]={0},tem[100];
    char sign,hh[100]={0},si[5],binary1[100],binary2[100],mmm;
    char bi1[100]={0},bi2[100]={0};
    int a,len,leng,j,T,first,second,sum,o,slen,flen;
    scanf("%d",&T);
    mmm=getchar();
    while(T--)
    {
    gets(tem);
    o=0;
    while((tem[o]>='A'&&tem[o]<='F')||(tem[o]>='0'&&tem[o]<='9'))
    {
        s[o]=tem[o];
        o++;
    }
    s[o]='\0';
    slen=strlen(s);
    leng=strlen(tem);
    o=leng-1;
    j=0;
    while((tem[o]>='A'&&tem[o]<='F')||(tem[o]>='0'&&tem[o]<='9'))
    {
        str[j++]=tem[o--];
    }
    str[j]='\0';
    rev(str,ch);
    j=0;
    while(1)
    {
        if(tem[j]=='-'||tem[j]=='+')
        {
        sign=tem[j];
        break;
        }

        j++;
    }
    count(s[0],h);
    for(j=1;j<slen;j++)
    {
        count(s[j],str);
        strcat(h,str);
    }
    rev(h,bi1);
    for(j=0;j<13;j++)
    {
        if(bi1[j]=='1')
        str[j]='1';
        else
        str[j]='0';
    }
    str[j]='\0';
    first=bitodeci(str);
    rev(str,binary1);
    leng=strlen(ch);
    count(ch[0],hh);
    for(j=1;j<leng;j++)
    {
        count(ch[j],str);
        strcat(hh,str);
    }
    rev(hh,bi1);
    for(j=0;j<13;j++)
    {
        if(bi1[j]=='1')
        str[j]='1';
        else
        str[j]='0';
    }
    str[j]='\0';
    second=bitodeci(str);
    if(sign=='+')
    sum=first+second;
    else
    {
        if(first>second)
        sum=first-second;
        else
        sum=second-first;
    }
    rev(str,binary2);
    printf("%s %c %s = %d\n",binary1,sign,binary2,sum);
    }
    return 0;
}
int count(char ch,char *hexa)
{
    char str[100];
    int a,len;
    if(ch=='A')
    a=10;
    else if(ch=='B')
    a=11;
    else if(ch=='C')
    a=12;
    else if(ch=='D')
    a=13;
    else if(ch=='E')
    a=14;
    else if(ch=='F')
    a=15;
    else
    {
    str[0]=ch;
    str[1]='\0';
    a=atoi(str);
    if(a==0)
    {
        converted[0]='0';
        converted[1]='0';
        converted[2]='0';
        converted[3]='0';
        converted[4]='\0';
    }
    }
    if(a>0)
    {
    base(a);
    converted[i]='\0';
    i=0;
    }
    len=strlen(converted);
        if(len==1)
        {
            hexa[0]='0';
            hexa[1]='0';
            hexa[2]='0';
            hexa[3]=converted[0];
            hexa[4]='\0';
        }
        else if(len==2)
        {
            hexa[0]='0';
            hexa[1]='0';
            hexa[2]=converted[0];
            hexa[3]=converted[1];
            hexa[4]='\0';
        }
        else if(len==3)
        {
            hexa[0]='0';
            hexa[1]=converted[0];
            hexa[2]=converted[1];
            hexa[3]=converted[2];
            hexa[4]='\0';
        }
        else
        strcpy(hexa,converted);
    return 0;
}
