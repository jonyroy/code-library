//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    char a[105];
    int i,j,b[150]={0},len;
    b['a']=1;b['A']=1;b['e']=1;b['E']=1;b['i']=1;b['I']=1;b['o']=1;b['O']=1;b['u']=1;
    b['U']=1;b['y']=1;b['Y']=1;
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(b[a[i]]==1)
        ;
        else
        {
            if(a[i]>='A'&&a[i]<='Z')
            printf(".%c",a[i]+32);
            else
            printf(".%c",a[i]);
        }
    }
    return 0;
}
