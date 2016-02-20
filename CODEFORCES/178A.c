#include<stdio.h>
int main()
{
    int n,a[110],m,x,y,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);

        if(x-1>0)
        a[x-1]+=(y-1);
        if(x+1<=n)
        a[x+1]+=(a[x]-y);
        a[x]=0;
    }
    for(i=1;i<=n;i++)
    printf("%d\n",a[i]);
    return 0;
}
