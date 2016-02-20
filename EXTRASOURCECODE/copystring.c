#include<stdio.h>
#include<string.h>
int copystring(char *store,char *orginal)
{
    while(*store++=*orginal++);
    return 0;
}
int main()
{
    char ch[100],j[100];
    printf("Enter String=");
    gets(j);
    copystring(ch,j);
    printf("%s",ch);
    return 0;
}
