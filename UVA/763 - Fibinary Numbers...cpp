#include<stdio.h>
#include<string.h>
int len[102];
char s[102][30],t[102][30];
int fibanacci()
{
    int i,j,h,l,la,p;
    char a[30],b[30];
    s[0][0]='1';s[0][1]=0; t[0][0]='1';t[0][1]=0;
    s[1][0]='2';s[1][1]=0; t[1][0]='2';t[1][1]=0;
    l=1;la=1;len[0]=1;len[1]=1;
    for(i=2;i<=100;i++)
    {
        h=0;
        for(j=0;j<l;j++)
        {
            a[j]=s[i-1][j]-48;
            if(la<=j)
            b[j]=0;
            else
            b[j]=s[i-2][j]-48;
            h=a[j]+b[j]+h;
            s[i][j]=h%10+48;
            h/=10;
        }
        if(h>0)
        s[i][j++]=h+48;
        s[i][j]=0;
        la=l;
        l=j;
        len[i]=l;
        p=0;
        for(j=l-1;j>=0;j--)
        t[i][p++]=s[i][j];
        t[i][p]=0;
    }
}
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    fibanacci();
    int i,j,k,la,lb,h,l,m,p,q,r=0;
    char a[102],b[102],c[102],d[30];
    while(scanf("%s",a)!=EOF)
    {
    la=strlen(a);
    j=0;
    for(i=la-1;i>=0;i--)
    b[j++]=a[i];
    b[j]=0;
    a[0]='0';
    a[1]=0;
    lb=strlen(b);
    la=1;
    for(i=0;i<lb;i++)
    {
        if(b[i]=='1')
        {
            h=0;
            l=la;
            if(l<len[i])
            l=len[i];
            for(j=0;j<l;j++)
            {
                if(la>j)
                a[j]-=48;
                else
                a[j]=0;
                if(len[i]>j)
                d[j]=s[i][j]-48;
                else
                d[j]=0;
                h+=d[j]+a[j];
                c[j]=h%10+48;
                h/=10;
            }
            if(h>0)
            c[j++]=h+48;
            c[j]=0;
            strcpy(a,c);
            la=j;
        }
    }
    scanf("%s",c);
    lb=strlen(c);
    j=0;
    for(i=lb-1;i>=0;i--)
    b[j++]=c[i];
    b[j]=0;
    lb=strlen(b);
    for(i=0;i<lb;i++)
    {
        if(b[i]=='1')
        {
            h=0;
            l=la;
            if(l<len[i])
            l=len[i];
            for(j=0;j<l;j++)
            {
                if(la>j)
                a[j]-=48;
                else
                a[j]=0;
                if(len[i]>j)
                d[j]=s[i][j]-48;
                else
                d[j]=0;
                h+=d[j]+a[j];
                c[j]=h%10+48;
                h/=10;
            }
            if(h>0)
            c[j++]=h+48;
            c[j]=0;
            strcpy(a,c);
            la=j;
        }
    }
    j=0;
    for(i=la-1;i>=0;i--)
    b[j++]=a[i];
    b[j]=0;
    i=0;j=100;
    while(1)
    {
        k=(i+j)/2;
        if(i>j)
        {
        k=j;
        break;
        }
        if(la<len[k])
        j=k-1;
        else if(la>len[k])
        i=k+1;
        else
        for(l=0;l<la;l++)
        {
            if(b[l]>t[k][l])
            {
                i=k+1;
                break;
            }
            else if(b[l]<t[k][l])
            {
                j=k-1;
                break;
            }
        }
        if(!strcmp(b,t[k]))
        break;
    }
    if(r>0)
    printf("\n");
    r++;
    if(k<0)
    {
        printf("0");
    }
    for(j=k;j>=0;j--)
    {
        m=0;
        if(la>len[j])
        {
            m=1;
        }
        else if(la<len[j])
        {
            m=0;
        }
        else
        for(i=0,p=0;i<la;i++)
        {
            if(b[i]>t[j][i])
            {
                m=1;
                break;
            }
            else if(b[i]<t[j][i])
            {
                m=0;
                break;
            }
            else
            p++;
        }
        if(la==p)
        {
            m=1;
        }
        if(m==1)
        {
            printf("1");
            for(i=0;i<la;i++)
            {
                q=1;
                if(len[j]>i)
                d[i]=s[j][i]-48;
                else
                d[i]=0;
                c[i]=a[i]-48;
                if(c[i]<d[i])
                {
                c[i]+=10;
                a[i+1]-=1;
                }
                c[i]=c[i]-d[i]+48;
             }
            c[i]=0;
            p=i-1;
            while(1)
            {
                if(c[p]!='0')
                break;
                if(p==0)
                break;
                p--;
            }
            la=0;
            for(i=p;i>=0;i--)
            {
            b[la++]=c[i];
            a[i]=c[i];
            }
            b[la]=0;
        }
        else
        printf("0");
    }
    printf("\n");
    }
    return 0;
}