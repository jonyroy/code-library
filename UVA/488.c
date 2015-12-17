//Accepted
#include<stdio.h>
int main()
{
    int i,j,n,a,f,k=1,b,l=1,m,T;
    scanf("%d",&T);
    while(l<=T)
    {
        k=1;
        scanf("%d%d",&m,&n);
        while(k<=n)
        {
            for(i=1;i<=m;i++)
            {
                for(j=1;j<=i;j++)
                {
                printf("%d",i);
                }
                printf("\n");
            }
            for(i=m-1;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                {
                printf("%d",i);
                }
                printf("\n");
            }
            if(k<n)
            printf("\n");
            k++;
        }
        if(l<T)
        printf("\n");
        l++;
       }
    return 0;
}
