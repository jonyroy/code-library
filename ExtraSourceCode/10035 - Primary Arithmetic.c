#include<stdio.h>
#include<string.h>
int main()
{
    long a[100000],b[100000],c[100000],i,j,m,n,l,k;
    while(gets(a),gets(b)!=EOF)
    {
        l=0;k=0;m=0;
        l=strlen(a);k=strlen(b);
        if(k>l)
        {
            for(i=l;i>=0;i--)
            c[i]=a[i]+b[i];
            if(c[i]>9)
            m++;


        }
        printf("%ld",m);
    }
}
