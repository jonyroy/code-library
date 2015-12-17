#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int i,u,y,j,k,a,count,carry,d[20];
   char n[20]={0},m[20]={0},len1,len2,sum[20]={0},suma[20]={0};
    while(1)
    {
        count=0;
        scanf("%s%s",n,m);
        u=atoi(n);
        y=atoi(m);
        if(u==0&&y==0)
        break;
        if(u==0||y==0)

        len1=strlen(n);
        len2=strlen(m);
        if(len1>len2)
        a=len1;
        else
        a=len2;
        j=0;
        k=0;
        for(i=len1-1;i>=0;i--)
        {
          sum[j]=n[i];
          j++;
        }
        for(i=len2-1;i>=0;i--)
        {
            suma[k]=m[i];
            k++;
        }
        carry=0;
        for(i=0;i<=a;i++)
        {
          d[i]=abs(sum[i]-'0'+suma[i]-'0')+carry;
          carry=d[i]/10;
          if(carry==1)
          count++;
        }
        if(count==0)
        printf("No carry operation.\n");
        else if(count==1)
        printf("1 carry operation.\n");
        else
        printf("%d carry operations.\n",count);
    }
    return 0;
}
