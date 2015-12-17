//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    int s[15],count,i,j;
    while(scanf("%d%d%d%d%d%d%d%d%d",&s[8],&s[7],&s[6],&s[5],&s[4],&s[3],&s[2],&s[1],&s[0])!=EOF)
    {
        count=0;
        j=0;
        for(i=0;i<=8;i++)
        if(s[i]==0)
        count++;
        if(count==9)
        {
            printf("0\n");
            continue;
        }
       for(i=8;i>=1;i--)
       {
           if(s[i]>0)
           {
               j++;
                   if(j>1)
                   printf(" + ");
                   if(s[i]>1)
                   printf("%d",s[i]);
                   printf("x");
                   if(i>1)
                   printf("^%d",i);
           }
            else
               if(s[i]<0)
               {
                   j++;
                 if(i>=1&&j==1)
                 printf("-");
                 else
                 printf(" - ");
                 if(s[i]<-1)
                 printf("%d",(-1)*s[i]);
                 printf("x");
                 if(i>1)
                 printf("^%d",i);
               }
        }
               if(s[0]>0&&j==0)
                   printf("%d",s[i]);
                   else
                   if(s[0]>0&&j>0)
                   printf(" + %d",s[0]);
               if(s[0]<0&&j==0)
                   printf("-%d",(-1)*s[i]);
                   else
                   if(s[0]<0&&j>=1)
                   printf(" - %d",(-1)*s[i]);
           printf("\n");
       }
    return 0;
}
