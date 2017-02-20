#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char line[1005],ch;
    int i,len,b,count=0;
    while(1)
    {
        b=1;
        count=0;
        gets(line);
        if((strcmp(line,"*"))==0)
            break;
        len=strlen(line);
        for(i=0; i<len; i++)
            if(line[i]==32)
                count++;
        if(count>0)
        {
            ch=toupper(line[0]);
            for(i=1; i<len; i++)
            {
                if(line[i]==32)
                {

                    if((toupper(line[i+1]))!=ch)
                    {
                        b=0;
                        break;
                    }

                }
            }
            if(b==0)
                printf("N\n");
            else
                printf("Y\n");
        }
        else
            printf("Y\n");
    }
    return 0;
}
