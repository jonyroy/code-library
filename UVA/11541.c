//Accepted
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#define MAX 1000
int main()
{
    long int i=1,j,k,len,T,v,l;
    char ch,m[MAX],n[MAX],c[10];
    bool test;
    scanf("%ld",&T);
    while(i<=T)
    {
        scanf("%s",m);
        len=strlen(m);
        j=0;
        printf("Case %ld: ",i);
        while(j<len)
        {
            k=0;
            test=false;
            if(isdigit(m[j])==0)
             ch=m[j];
            while(isdigit(m[j]))
            {
                n[k++]=m[j];
                j++;
                test=true;
            }
            n[k]='\0';
            v=atol(n);
            for(l=1;l<=v;l++)
            printf("%c",ch);
            if(test==false)
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
