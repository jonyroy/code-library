#include<stdio.h>
int main()
{
    int count=0,coun=0,i=0,k=0,l,n,jajabar,b;
    char ch[500],j;
    printf("\nEnter The Paragraph:\n");
    while((j=getchar())!=EOF)
    {
        ch[i]=j;
        if(isalpha(ch[i]))
        k++;
        if(ch[i]==' ')
        count++;
        if(ch[i]=='\n')
        coun++;
        i++;
    }
    for(l=0;l<i-1;l++)
    {
        jajabar=1;
        for(n=l+1;n<i-1;n++)
        {
        b=ch[l];
        //if(ch[l]=' ')
        //ch[l]=0;
        if(ch[l]==ch[n])
          {
            jajabar++;
            ch[n]=0;
          }
        }
        if(ch[l]!=' ')
        printf("%c=%d\n",ch[l],jajabar);
    }
    printf("\nWords %d\nLines %d\nCharacter %d",count+1,coun,k);
return 0;
}

