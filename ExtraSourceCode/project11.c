#include<stdio.h>
int main()
{
    char ch[80],c;
    int i=0,j;
    printf("\nEnter The paragrah:");
    while((c=getchar())!=EOF)
    {
    ch[i]=c-2;
    i++;
    }
     for(j=0;j<=i-1;j++)
    {
        printf("%c",ch[j]);
    }
    return 0;
}
