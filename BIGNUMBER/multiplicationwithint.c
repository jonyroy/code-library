#include<stdio.h>
#include<string.h>
#define MAX 3570
char store[1000][2569];
int rev(char *a,char *b);
int multiplication(char *a,char *b,char *m);
int copystring(char *store,char *orginal)
{
    while(*store++=*orginal++);
    return 0;
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
int mul_int(char *a,long int b,char *c)
{

    char d[MAX],e[MAX];
    long int length,i,carry,tem;
    length=strlen(a);
    rev(a,d);
    carry=0;
    for(i=0;i<length;i++)
    {
        tem=(d[i]-48)*b+carry;
        e[i]=tem%10+48;
        carry=tem/10;
    }
    if(carry>0)
    {
        e[i]=carry+48;
        i++;
    }
    e[i]='\0';
    rev(e,c);
    return 0;
}
int main()
{
    char a[MAX],m[MAX],c[MAX],dd[MAX];
    int  i,j,f,n;
    long int len,p,sum;
    a[0]='1';
    a[1]='\0';
    for(i=1;i<=1000;i++)
    {
    n=i;
    j=0;
    while(n!=0)
    {
        dd[j]=(n%10)+48;
        n=n/10;
        j++;
    }
    dd[j]='\0';
    rev(dd,c);
    multiplication(a,c,m);
    copystring(a,m);
    copystring(store[i],m);
    }
    store[0][0]='1';
    store[0][1]='\0';
    while(scanf("%d",&f)!=EOF)
    {
        /*if(f==0)
        printf("0!\n1\n");
        else
        {*/
          printf("%d!\n",f);
          printf("%s\n",store[f]);
        //}
    }
    return 0;
}
