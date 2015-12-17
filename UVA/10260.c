//Accepted
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int main()
{
    char word[100]={"01230120022455012623010202"},map[200],w[200];
    int len,i,j=65;
    bool test;
    for(i=0;i<26;i++)
    map[j++]=word[i];
    while(scanf("%s",w)!=EOF)
    {
        len=strlen(w);
        for(i=0;i<len;i++)
        {
            if(map[w[i]]>48)
            {
            if(map[w[i]]==map[w[i+1]])
            {
                continue;
            }
            printf("%c",map[w[i]]);
            }
        }
        printf("\n");
    }
    return 0;
}
