//Accepted
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int base(long n)
{
    long c,r,b=16;
    if(n==0)
    return 0;
    c=n/b;
    r=n-b*c;
    n=c;
    base(n);
    if(r==10)
    printf("A");
    else if(r==11)
    printf("B");
    else if(r==12)
    printf("C");
    else if(r==13)
    printf("D");
    else if(r==14)
    printf("E");
    else if(r==15)
    printf("F");
    else
    printf("%ld",r);
}
long int hexatodeci(char *hexa)
{
    long int len,i,j,k,sum;
    char h[5];
    len=strlen(hexa);
    sum=0;
    for(i=0;i<len;i++)
    {
        if(hexa[i]=='A')
        sum=sum+(10*(long)pow(16,i));
        else if(hexa[i]=='B')
        sum=sum+(11*(long)pow(16,i));
        else if(hexa[i]=='C')
        sum=sum+(12*(long)pow(16,i));
        else if(hexa[i]=='D')
        sum=sum+(13*(long)pow(16,i));
        else if(hexa[i]=='E')
        sum=sum+(14*(long)pow(16,i));
        else if(hexa[i]=='F')
        sum=sum+(15*pow(16,i));
        else
        {
            h[0]=hexa[i];
            h[1]='\0';
        sum=sum+(atol(h)*(long)pow(16,i));
        }
    }
    return sum;
}
int main()
{
    long int n,i,len,j,k,m;
    char s[100],b[100];
    while(scanf("%s",s))
    {
        if(s[1]=='x')
        {
            j=0;
           len=strlen(s);
           i=len-1;
           while(s[i]!='x')
           {
               b[j++]=s[i];
               i--;
           }
           b[j]='\0';
           if(b[j-1]=='0')
           {
           printf("0\n");
           }
           else
           {
               m=hexatodeci(b);
               printf("%ld\n",m);
           }
        }
        else
        {
        m=atol(s);
        if(m<0)
        break;
        if(m==0)
        {
        printf("0x0\n");
        continue;
        }
        printf("0x");
        base(m);
        printf("\n");
        }
    }
    return 0;
}
