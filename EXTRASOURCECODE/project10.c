#include<stdio.h>
int main()
{
    char ch[80],c;
    int i=0,j;
    printf("\nEnter The paragrah:");
    while((c=getchar())!='\n')
    {
    ch[i]=c;
    i++;
    }
     for(j=0;j<=i-1;j++)
    {
        printf("%c",ch[j]+2);
    }
    return 0;
}
