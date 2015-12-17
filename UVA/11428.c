//Accepted
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int N,i,j,n;
    bool test;
    while(scanf("%d",&N)&&N)
    {
        test=false;
        if(N==1)
        {
        printf("No solution\n");
        continue;
        }
        n=(int)sqrt(N);
        for(i=2;i<=n;i++)
        {
            for(j=1;j<i;j++)
            {
                if(((i*i*i)-(j*j*j))==N)
                {
                test=true;
                break;
                }
            }
            if(test==true)
            break;
        }
        if(test==true)
        printf("%d %d\n",i,j);
        else
        printf("No solution\n");
    }
    return 0;
}
