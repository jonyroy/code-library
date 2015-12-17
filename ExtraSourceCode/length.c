#include<stdio.h>
#include<string.h>
int main()
{
    char ch[500][500];
    int i,j;
    for(i=0;i<10;i++)
    {
        gets(ch[i]);
    }
    for(i=0;i<10;i++)
    {
        puts(ch[i]);
    }
    return 0;
}
