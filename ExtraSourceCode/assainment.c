#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[100][100];
    int a[200],b[200],c[200],d[200],e[200],f[200];
    int i,j,k,l,n,len,max,p,maxi=-1,op,T;
    for(i=0;i<100;i++)
    for(j=0;j<100;j++)
    ch[i][j]=0;
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        scanf("%s",ch[i]);
        len=strlen(ch[i]);
        int val[200]={0};
        for(op=0;op<len;op++)
        {
            ch[i][op]=toupper(ch[i][op]);
        }
        for(j=0;j<len;j++)
        {
            val[ch[i][j]]++;
        }
        if(maxi<len)
        maxi=len;
        max=-1;
        for(j=0;j<200;j++)
        {
            if(max<val[j])
            {
                max=val[j];
                p=j;
            }
        }
        a[i]=max;
        b[i]=p;
        i++;
    }
    for(i=0;i<maxi;i++)
    {
    int value[200]={0};
    for(j=0;j<n;j++)
    {
        if(ch[j][i]!='\0')
    value[ch[j][i]]++;
    }
    max=-1;
    for(j=0;j<200;j++)
    {
        if(max<value[j])
        {
            max=value[j];
            p=j;
        }
    }
    c[i]=max;
    d[i]=p;
    }
    k=0;
    while(k<n)
    {
    i=k;
    j=0;
    T=1;
    int pop[200]={0};
    while(ch[i][j]!='\0')
    {
     pop[ch[i][j]]++;
     if(T==1)
     {
         i++;
         j++;
         T++;
     }
     else if(T==2)
     {
         i++;
         T++;
     }
     else if(T==3)
     {
         j++;
         T++;
     }
     else if(T==4)
     {
         i--;
         T=1;
     }
    }
    max=-1;
    for(l=1;l<128;l++)
    {
        if(max<pop[l])
        {
          max=pop[l];
          op=l;
        }
    }
    e[k]=max;
    f[k]=op;
    k++;
    }
    printf("\nColumn Wise\n");
    for(j=0;j<maxi;j++)
    printf("%c=%d\n",d[j],c[j]);
    printf("\nRow Wise\n");
    for(j=0;j<n;j++)
    printf("%c=%d ",b[j],a[j]);
    printf("\nDiagonally\n");
    for(j=0;j<n;j++)
    printf("%c=%d\n",f[j],e[j]);
    return 0;
}
