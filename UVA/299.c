#include<stdio.h>
int main()
{
    int n,m,len[1000],i,j,temp,count;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&len[i]);
        }
        count=0;
        for(i=0;i<m-1;i++)
        {
            for(j=0;j<m-1-i;j++)
            {
                if(len[j]>len[j+1])
                {
                    temp=len[j];
                    len[j]=len[j+1];
                    len[j+1]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
        n--;
    }
    return 0;
}
