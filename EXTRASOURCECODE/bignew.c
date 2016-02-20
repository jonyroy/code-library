#include<stdio.h>
#include<string.h>
int main()
{
    char first[1000]={},second[1000]={},tem1[1000]={},tem2[1000]={};
    long long int sum;
    char sumation[1000]={};
    int lenf,lens,i,j,tem,carry;
    while(1)
    {
        scanf("%s",second);
        lenf=strlen(first);
        lens=strlen(second);
        if(strcmp(second,"0")==0)
        {
            printf("%s\n",first);
            break;
        }
        j=0;
        for(i=lenf-1;i>=0;i--)
        {
            tem1[j++]=first[i];
        }
        j=0;
        for(i=lens-1;i>=0;i--)
        {
            tem2[j++]=second[i];
        }
        if(lens>lenf)
        tem=lens;
        else
        tem=lenf;
        carry=0;
        for(i=0;i<tem;i++)
        {
            if(tem1[i]=='\0')
            tem1[i]='0';
            else
            if(tem2[i]=='\0')
            tem2[i]='0';
         sum=tem1[i]-'0'+tem2[i]-'0'+carry;
         sumation[i]=sum%10+'0';
         carry=sum/10;
        }
        if(carry>0)
        {
        sumation[i]=carry+'0';
        i++;
        }
        int k=0;
        for(j=i-1;j>=0;j--)
        {
            first[k++]=sumation[j];
        }
        first[k]='\0';
    }
    return 0;
}
