#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100][100];
    int med[100],i=1,j,n,tem,k,l;
    while(scanf("%d",&n)!=EOF)
    {
        i=1;
    while(i<=n)
    {
    scanf("%s%d",ch[i],&med[i]);
    i++;
    }
    k=0;
    l=0;
    for(i=1;i<n;i++)
    {
        if(med[i]>med[i+1])
        {
            tem=med[i];
            med[i]=med[i+1];
            med[i+1]=tem;
            j=i-k;
            k++;
        }
        else
        {
           k=0;
           j=i+1;
           //l++;
        }
    }
    printf("%s %d\n",ch[j],med[n]);
    }
    return 0;
}
