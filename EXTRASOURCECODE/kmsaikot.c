#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,la,lb,t,c;
    char a[252],b[252],s[503];
    while(scanf("%s %s",a,s)!=EOF)
    {
    la=strlen(a);
    lb=strlen(s);
    j=0;
    for(i=lb-1;i>=0;i--)
    b[j++]=s[i];
    b[j]=0;
    for(i=0;i<503;i++)
    s[i]=48;
    l=strlen(b);
    for(i=0;i<l;i++)
    {
        k=i;t=0;
        for(j=la-1;j>=0;j--)
        {
            c=(((a[j]-48)*(b[i]-48))+t+(s[k]-48));
            s[k]=c%10+48;
            t=c/10;
            k++;
        }
    while(t>0)
    {
        s[k++]=t%10+48;
        t/=10;
    }
    }
    j=k-1;
    while(1)
    {
        if((s[j]!='0')||(j==0))
        break;
        j--;
    }
    for(i=j;i>=0;i--)
    {
    printf("%c",s[i]);
    }
    printf("\n");
    }
    return 0;
}
