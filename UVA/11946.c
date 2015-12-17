//Accepted
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char ch[100],c;
    int T,i=1,len,j=1;
    bool test;
    scanf("%d%*c",&T);
    while(j<=T)
    {
        while(gets(ch))
        {
            len=strlen(ch);
            if(len==0)
            break;
            for(i=0;i<len;i++)
            {
            if(ch[i]=='0')
            printf("O");
            else if(ch[i]=='1')
            printf("I");
            else if(ch[i]=='2')
            printf("Z");
            else if(ch[i]=='3')
            printf("E");
            else if(ch[i]=='4')
            printf("A");
            else if(ch[i]=='5')
            printf("S");
            else if(ch[i]=='6')
            printf("G");
            else if(ch[i]=='7')
            printf("T");
            else if(ch[i]=='8')
            printf("B");
            else if(ch[i]=='9')
            printf("P");
            else
            printf("%c",ch[i]);
            }
            printf("\n");
        }
        if(j<T)
        printf("\n");
        j++;
    }
    return 0;
}
