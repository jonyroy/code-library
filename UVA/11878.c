#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char math[11],ch,x[5],*y,*z;
    int a,b,c,i,s,j,k,l;

    while(1)
    {
        i=0;s=0;j=0;k=0,l=0;
        if((scanf("%s",math))==EOF)
           break;
       // for(i=0;i<strlen(math);i++)

      while(1)
       {
           if(math[i]=='+')
           break;
           x[l++]=math[i++];
       }
       x[l]='\0';
       a=atoi(x);
      /* if(math[i]=='+')
       s=1;
       while(math[i]!='=')
       {
           y[j++]=math[i++];
       }
       y[j]='\0';
       b=atoi(y);
      i=i+1; //passing equal sign
      while(math[i]=='\0')
      {
          z[k++]=math[i++];
      }
      z[k]='\0';
      c=atoi(z);*/

      printf("%d\n",a);

    }
    return 0;
}
