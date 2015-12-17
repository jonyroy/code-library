//Accepted
#include<stdio.h>
#include<string.h>
int main()
{
    char line[1000],ch;
    int i,len;
    while(gets(line))
    {
        len=strlen(line);
        for(i=0;i<len;i++)
        printf("%c",line[i]-7);
        printf("\n");
    }
    return 0;
}
