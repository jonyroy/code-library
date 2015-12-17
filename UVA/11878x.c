#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char math[11],ch,x[5],y[5],z[5];
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
      i=i+1; //passing equal sign
      while(1)
       {
           if(math[i]=='\0')
           {
            break;
           }

           z[k++]=math[i++];
       }
      z[k]='\0';
      c=atoi(z);

      printf("%d %d %d\n",a,b,c);

    }
    return 0;
}
