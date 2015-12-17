//I got very very interested solving this problem.
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    char digit[50],d[50],temp;
    long long int a,i,j,b,len,c,e,k;
    double n,m;
    while(scanf("%s",digit)==1)
    {
        len=strlen(digit);
        sort(digit,digit+len);
        if(digit[0]=='0')
        {
            k=1;
            while(1)
            {
                if(digit[k]>'0')
                {
                  temp=digit[k];
                  digit[k]=digit[0];
                  digit[0]=temp;
                  break;
                }
                k++;
            }
        }
        digit[len]='\0';
        n=atof(digit);
        a=(long long int)n;
        sort(digit,digit+len);
        j=0;
        for(i=len-1;i>=0;i--)
        {
            d[j++]=digit[i];
        }
        d[j]='\0';
    m=atof(d);
    b=(long long int)m;
    c=b-a;
    e=c/9;
    printf("%lld - %lld = %lld = 9 * %lld\n",b,a,c,e);
    }
    return 0;
}
