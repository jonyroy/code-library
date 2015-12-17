//Acceted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define MAX 9000
int main()
{
    char a[MAX];
    int len,i,j,k,min;
    int c=1;;
    while(gets(a))
    {
        if(c>1)
        printf("\n");
        int count[200]={0};
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            count[a[i]]++;
        }
       for(i=32;i<=126;i++)
       {
           min=1500;
           for(j=32;j<=126;j++)
           {
           if(count[j]>0)
           if(min>=count[j])
           {
               k=j;
               min=count[j];
           }
           }
           if(min>0&&min!=1500)
           {
           printf("%d %d\n",k,min);
           count[k]=0;
           }
       }
       c++;
    }
    return 0;
}
