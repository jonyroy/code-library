    #include <stdio.h>
    #include<string.h>
    #include<ctype.h>
    #include<stdlib.h>

    void print_bin(int m)
    {
       int i=0,k;
       char arr[100];

       while(m!=0)
       {
         arr[i++]=m%2;
         m=m/2;
       }
       k=i-1;
       for(i=k;i>=0;i--)
       printf("%d",arr[i]);
    }

   int convert_to_hex(char sh[100])
    {
    int number;
    int ch;
    int i=0,j=0;
    number = 0;
    i =strlen(sh);
    j=0;
    while(i!=0)
    {
    ch = toupper(sh[j]);
    if(('0' <= ch && ch <= '9'))
    {
    number = number * 16;
    number = number + (ch - '0');
    }
    if(('A' <= ch && ch && ch <= 'Z'))
    {
    number = number * 16;
    number = number + (ch - '7');
    }
    i--;
    j++;
    }
    return (number);
    }


    int main()
    {
     int x,y,result,i,k,s,n,m,T;
     char a[100],b[100],line[200];
     scanf("%d",&T);
     while(T)
     {
         k=0;i=0;s=1;

        gets(line);

         for(i=1;i<=strlen(line);i++)
         {
             if(line[i]==' ')
             {
                 n=i;
                 break;
             }
         }

         strncpy(a,line,n);
         i=i+1;
         if(line[i++]=='-')
         s=0;

         i=i+1;
         k=0;
         for(;;i++)
         {
             if(line[i]=='\0')
                 break;
             b[k++]=line[i];
         }
         b[k]='\0';
         x=convert_to_hex(a);
         y=convert_to_hex(b);
         print_bin(x);
         if(s==1)
         {   printf(" + ");
             result=x+y;
         }
         else
         {
             printf(" - ");
             result=x-y;
         }
         print_bin(y);
    printf(" = %d\n",result);
    T--;
    }

   return 0;

    }
