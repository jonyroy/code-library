#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char math[11],ch,x[5],y[5],z[5];
    int a,b,c,i,s,j,k,l,correct=0;

    while((scanf("%s",math))!=EOF)
    {
        i=0;s=0;j=0;k=0,l=0;
      while(1)
       {
           if(math[i]=='+')
           { s=1;
            break;
           }
             if(math[i]=='-')
           { s=0;
            break;
           }
           x[l++]=math[i++];
       }
       x[l]='\0';
       a=atoi(x);
          i=i+1;
       while(1)
       {
           if(math[i]=='=')
           {
            break;
           }

           y[j++]=math[i++];
       }
       y[j]='\0';
       b=atoi(y);
      i=i+1;
      while(1)
       {
           if(math[i]=='\0')
           {
            break;
           }

           z[k++]=math[i++];
       }
      z[k]='\0';

      if((strcmp(z,"?"))==0)
      continue;
      else
      c=atoi(z);
      if(s==1)
      {
         if(a+b==c)
         correct++;
      }
      if(s==0)
      {
         if(a-b==c)
         correct++;
      }
    }
     printf("%d\n",correct);
    return 0;
}
