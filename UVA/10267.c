#include<stdio.h>
int popo(long int s,long int b)
{
    long int i,j,k,l,t,h;
     for(i=1;i<=1;i++)
     {
         printf(" ");
         if(b==3||b==2||b==5||b==6||b==7||b==8||b==0||b==9)
         for(j=1;j<=s;j++)
         {
             printf("-");
         }
         printf("\n");
         for(k=1;k<=s;k++)
         {
             if(b==4||b==5||b==6||b==8||b==9||b==0)
             printf("|");
             for(t=1;t<=s;t++)
             printf(" ");
             if(b==2||b==1||b==4||b==3||b==7||b==8||b==9||b==0)
             printf("|");
             printf("\n");
         }
           printf(" ");
           if(b==2||b==3||b==4||b==5||b==6||b==8||b==9)
         for(j=1;j<=s;j++)
         {
             printf("-");
         }
         printf("\n");
         for(k=1;k<=s;k++)
         {
             if(b==0||b==2||b==6||b==8)
             printf("|");
             for(l=1;l<=s;l++)
             printf(" ");
             if(b==1||b==4||b==3||b==5||b==6||b==7||b==8||b==9||b==0)
             printf("|");
             printf("\n");
         }
           printf(" ");
        if(b==2||b==3||b==5||b==6||b==8||b==9||b==0)
        for(j=1;j<=s;j++)
         {
             printf("-");
         }
     }
    return 0;
}
int main()
{
    long int s,n,i;
    while(scanf("%ld",&s))
    {
        if(s==0)
        break;
        for(i=1;i<=3;i++)
        {
        scanf("%ld",&n);
        popo(s,n);
        }
    }
    return 0;
}
