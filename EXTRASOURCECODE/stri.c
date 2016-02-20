#include<stdio.h>
#include<string.h>
int main()
{
    char ch[500],b[500],c[]="aaaaa";
    int i,j=0,count,k,space=0,words=0,len;
    printf("\nEnter The String:\n");
    while(1)
    {
        gets(ch);
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            if(ch[i]==32)
            {
              space++;
              b[j]='\0';
              k=strcmp(b,c);
              if(k==0)
              break;
              else
              words++;
              j=0;
            }
            else
            {
              b[j]=ch[i];
              j++;
            }
        }
        if(k==0)
        break;
    }
    printf("\nSpace=%d\nWords=%d",space,words);
    return 0;
}
