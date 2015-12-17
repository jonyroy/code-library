#include<stdio.h>
int main()
{
    int i,j,k;
    char a;
    i=0;j=0,k=0;
    do
    {
        a=getchar();
        if(a==10)
        {
         j++;
        }
        i++;
    }
    while(a!=EOF);
    printf("%d\n%d",i,j+1);
}
