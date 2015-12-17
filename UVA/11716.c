//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
char line[10050],test[100],result[10050];
int main()
{
    long int i,j,a,b,T,len,k,l,c;
    T=atol(gets(test));
    while(T)
    {
        gets(line);
        len=strlen(line);
        a=sqrt(len);
        c=a*a;
        if(c==len)
        {
            l=0;
            b=1;
            k=0;
         for(i=1;i<=a;i++)
         {
             for(j=1;j<=a;j++)
             {
              result[k++]=line[l];
              l=l+a;
             }
            l=b;
            b++;
         }
         result[k]='\0';
         printf("%s\n",result);
        }
        else
        printf("INVALID\n");
       T--;
    }
    return 0;
}
