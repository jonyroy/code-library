#include<stdio.h>
int main()
{
    int H,M;
    double c,a;
    char ch;
    while(1)
    {
        scanf("%d%c%d",&H,&ch,&M);
        if(H==0&&M==0)
        break;
        a=((60-H*5)-(.083333333333*M))+M;
        c=a*6.0;
        if(c<180.00)
        {
         printf("%.3lf\n",c);
        }
        if(c>360.0)
        {
        c=720-c;
        printf("%.3lf\n",c);
        }
        if(c>180.0)
        {
        c=360-c;
        printf("%.3lf\n",c);
        }
    }
    return 0;
}
