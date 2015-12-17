#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int k,i,j,store[1005]={0},len,a,c;
    char s[1005],b[1005];
    bool test=false;
    scanf("%d%s",&k,s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        store[s[i]]++;
    }
    //printf("%d\n",store[97]);
    if(k==1)
    printf("%s\n",s);
    else if(len%k)
    printf("-1\n");
    else if(len%k==0)
    {
        j=0;
        int l=0,t;
        for(t=1;t<=k;t++)
        {
        for(i=97;i<=122;i++)
        {
            if(store[i]>0)
            {
            if(store[i]%k==0)
            {
                a=store[i]/k;
                for(j=1;j<=a;j++)
                {
                    b[l++]=i;
                }
            }
            else
            {
                test=true;
                break;
            }
            }
        }
        if(test==true)
        break;
        }
        if(test==true)
        printf("-1\n");
        else
        {
            b[l]='\0';
            printf("%s\n",b);
        }
    }
    return 0;
}
