//ACCEPTED
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    char word[100]={"01230120022455012623010202"},map[100],w[100];
    char s[100];
    int len,i,j=65,k,l;
    bool test;
    for(i=0;i<26;i++)
    map[j++]=word[i];
    printf("         NAME                     SOUNDEX CODE\n");
    while(scanf("%s",w)!=EOF)
    {
    len=strlen(w);
    char store[100]={0};
    int count=0,c=0;
    for(i=0;i<len;i++)
    store[i]=map[w[i]];
    s[0]=w[0];
    i=0;
    j=1;
    count=0;
    while(w[i]!='\0')
    {
       if(store[i]!=store[i+1])
       {
        count++;
        if(count>1&&store[i]!='0')
       s[j++]=store[i];
       }
       i++;
    }
    s[j]='\0';
    l=strlen(s);
    if(l>4)
    s[4]='\0';
    else
    {
        for(i=l;i<=3;i++)
        s[i]='0';
        s[i]='\0';
    }
    printf("         %s",w);
    for(i=0;i<25-len;i++)
    printf(" ");
    printf("%s\n",s);
    }
    printf("                   END OF OUTPUT\n");
    return 0;
}

