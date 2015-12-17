#include<stdio.h>
#include<math.h>
int main()
{
    long int n,m,b,a,i;
    while(scanf("%ld",&n))
    {
        if(n==0)
        break;
        long count=0,cout=0;
        while(scanf("%ld",&m))
        {
            if(m==0)
            break;
            if(n>=m)
            {
                count++;
            }
            else
            {
                if(n<=m)
                {
                    cout++;
                }
            }
            n=m;
        }
    }
    return 0;
}
