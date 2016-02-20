#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
int main()
{
    char Q[500],P[500],stack[500];
    char extra[500],ch[500]={0};
    int i,j,k,l,len,s;
    ch['-']=1;
    ch['+']=2;
    ch['/']=3;
    ch['*']=4;
    ch['^']=5;
    ch['(']=-1;
    ch[')']=-1;
    while(scanf("%s",Q)!=EOF)
    {
        i=0;
        s=-1;
        j=0;
        stack[++s]='(';
        len=strlen(Q);
        Q[len]=')';
        while(j<=len)
        {
            if(isalpha(Q[j]))
            P[i++]=Q[j];
            else if(Q[j]=='(')
            stack[++s]=Q[j];
            else if(ch[Q[j]]>0)
            {
                while(ch[stack[s]]>=ch[Q[j]])
                {
                    P[i++]=Q[s];
                    s--;
                }
                stack[++s]=Q[j];
            }
            else if(Q[j]==')')
            {
                while(stack[s]!='(')
                {
                     P[i++]=stack[s];
                     s--;
                }
                s--;
            }
            j++;
        }
        P[i]='\0';
        printf("%s\n",P);
    }
    return 0;
}
