    #include <stdio.h>
    #include<string.h>
    #include<ctype.h>
    #include<stdlib.h>
    void print_bin(int m)
    {
       int i=0,k;
       char arr[13]={0};
       while(m!=0)
       {
         arr[i++]=m%2;
         m=m/2;
       }
       for(i=12;i>=0;i--)
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
     int x,y,result,i,k,s,n,m,T,hx,hy;
     char a[100],b[100],line[200],si;
     scanf("%d",&T);
     while(T)
     {
        scanf("%x %c %x",&hx,&si,&hy);
          if(si=='+')
          s=1;
        sprintf(a,"%x",hx);
        sprintf(b,"%x",hy);

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
