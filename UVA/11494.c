//Accepted
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{

    int x1,y1,x2,y2,a,b;
    while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2))
    {
        if(x1==0&&x2==0&&y1==0&&y2==0)
        break;
        if(x1==x2&&y1==y2)
        printf("0\n");
        else if(x1==x2)
        printf("1\n");
        else if(y1==y2)
        printf("1\n");
        else
        {
            if(x1>x2)
            {
            a=x1-x2;
            }
            else
            {
            a=x2-x1;
            }
            if(y1>y2)
            {
            b=a+y2;
            if(b==y1)
            printf("1\n");
            else
            printf("2\n");
            }
            else
            {
            b=a+y1;
            if(b==y2)
            printf("1\n");
            else
            printf("2\n");
            }
        }
    }
    return 0;
}
