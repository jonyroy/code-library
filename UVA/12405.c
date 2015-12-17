#include<stdio.h>
int main()
{
    int T,n,count,i=1,a,j;
    char ch;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%d",&n);
        count=0;
        for(j=1;j<=n;j++)
        {
            scanf("%c",&ch);
            if(ch=='.')
            count++;
        }
         if(count==1)
        {
        printf("Case %d: 1\n",i);
        }
        else
        {
            if(count==0)
            printf("Case %d: 0\n",i);
            else
            {
            a=count/2;
            printf("Case %d: %d\n",i,a);
            }
        }
        i++;
    }

    return 0;
}
