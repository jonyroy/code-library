#include<stdio.h>
int main()
{
    int i=0,s=0,ch=0;
    char c,a[i];
    printf("enter line :");
    do
    {
        c=getchar();
        a[i]=c;
        if(c==32)
        s++;
        if(c!=32&&c!=10)
        ch++;
        i++;
    }
    while(c!=10);
    printf("total char=%d\ttotal word=%d",ch++,++s);
}
