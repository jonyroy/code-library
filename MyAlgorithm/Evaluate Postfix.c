#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    char ex[200],store[100];
    int j=0,top=-1,len,k,s[100],l=0,ch[100]={0},stack[200];
    int op,a,b,c,i;
    bool test;
    printf("Enter Postfix Notation With one Space.\n");
    printf("Example=A B c + ^.\n");
    gets(ex);
    len=strlen(ex);
    ch['+']=-1;
    ch['-']=-2;
    ch['*']=-3;
    ch['/']=-4;
    ch['^']=-5;
    for(i=0;i<len;i++)
    {
        if(ch[ex[i]]<0)
        s[l++]=ch[ex[i]];
        else
        {
        k=0;
        while(ex[i]!=32&&i<len)
        {
            store[k++]=ex[i];
            i++;
        }
        if(k>0)
        {
            store[k]='\0';
            b=atoi(store);
            s[l++]=b;
        }
        }
    }
    while(j<l)
    {
        if(s[j]>=0)
        stack[++top]=s[j];
        else
        {
            op=s[j];
            a=stack[top--];
            b=stack[top--];
            if(op==-5)
            c=(int)pow(b,a);
            else if(op==-4)
            c=b/a;
            else if(op==-3)
            c=b*a;
            else if(op==-2)
            c=b-a;
            else
            c=b+a;
            stack[++top]=c;
        }
        j++;
    }
    printf("Evaluated Value=%d\n",stack[top]);
    return 0;
}
