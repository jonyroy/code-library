#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<list>
#include<stack>
#include<map>
#include<set>
#include<cmath>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char word[1000]={"01230120022455012623010202"},map[1000],w[1000];
    char s[1000];
    int len,i,j=65,k,l;
    bool test;
    for(i=0;i<26;i++)
    map[j++]=word[i];
    printf("         NAME                     SOUNDEX CODE\n");
    while(scanf("%s",w)!=EOF)
    {
    len=strlen(w);
    char store[1000]={0};
    int count=0,c=0;
    test=false;
      while(w[i]=='0'&&i<len)
        {
            i++;
        }
        if(i==len)
        {
            store[0]=w[0];
            store[1]='\0';
            break;
        }
        else
        if(i>0)
    for(i=0;i<len;i++)
    {
    if(map[w[i]]>48)
    {
    if(i<len-1&&(map[w[i]]==map[w[i+1]]))
    {
        count++;
        continue;
    }
    store[c++]=w[i-count];
    test=true;
    count=0;
    }
    }
    /*if(test==false)
    {
        store[0]=w[0];
        store[1]='\0';
    }
    else*/
    store[c]='\0';
    s[0]=store[0];
    for(i=1;i<=3;i++)
    {
        if(store[i]=='\0')
        s[i]='0';
        else
        s[i]=map[store[i]];
    }
    s[4]='\0';
    printf("         %s",w);
    for(i=0;i<25-len;i++)
    printf(" ");
    printf("%s\n",s);
    }
    printf("                   END OF OUTPUT\n");
    return 0;
}
