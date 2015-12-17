#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000],c,d[1000];
    int i=0,j=0,s=0,h,v[10],k=0;
    while(c=getchar())
    {
     ch[i]=c;
     if(ch[i]=='a')
     {
         j++;
         v[k]=i;
         if(j==5)
         {
             s=0;
             for(h=v[0];h<5+v[0];h++)
             {
                 if(ch[h]=='a')
                 s++;
             }
             if(s!=5)
;
         }
     }
     if(s==5)
     break;
     i=v[k];
     i++;
     k++;
    }
    return 0;
}
