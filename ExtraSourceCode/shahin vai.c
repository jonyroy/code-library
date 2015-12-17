#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[1000],cr,c[1000];
    int n=0,i=0,j,count=0,down=0,m,k,l;
    printf("\nEnter The String With One Space:\n");
    while((cr=getchar())!=EOF)
    {
        ch[i]=cr;
        if(isalpha(ch[i]))
        n++;
        if(ch[i]==' ')
        count++;
        if(ch[i]=='\n')
        down++;
        i++;
    }
    m=i;
    for(i=0;i<m;i++)
    {
        if(ch[i]==' '||ch[i]=='\n')
        ch[i]=0;
    }
    for(i=0;i<m;i++)
    {
        l=1;
        for(k=i+1;k<m;k++)
        {
            if(ch[i]==ch[k])
            {
            l++;
            ch[k]=0;
            }
        }
        if(ch[i]!=0)
        printf("%c=%d\n",ch[i],l);
    }
    printf("Letter=%d\nSpace=%d\n",n,count);
    printf("Words=%d\nLines=%d",count+down,down);
    return 0;
}
