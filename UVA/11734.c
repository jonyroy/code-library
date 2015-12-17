#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int i=1,j,k,T,len,len2;
    char a[100],b[100],c[100];
    bool test;
    scanf("%d%*c",&T);
    while(i<=T)
    {
        gets(a);
        gets(b);
        test=false;
        len=strlen(a);
        len2=strlen(b);
        k=0;
        for(j=0;j<len;j++)
        {
            if(isalpha(a[j]))
            c[k++]=a[j];
            else
            test=true;
        }
        c[k]='\0';
        if(test==true&&(strcmp(c,b)==0))
        printf("Case %d: Output Format Error\n",i);
        else
        if(strcmp(c,b)==0)
        printf("Case %d: Yes\n",i);
        else
        printf("Case %d: Wrong Answer\n",i);
        i++;
    }
    return 0;
}
