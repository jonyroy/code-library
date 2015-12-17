//Accepted
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
long long int f[1000],i,r,T,n,sum;
scanf("%lld",&T);
while(T)
{
    scanf("%lld",&r);
    for(i=0;i<r;i++)
    {
        scanf("%lld",&f[i]);
    }
    if(r==1)
    printf("0\n");
    else
    if(r==2)
    printf("%lld\n",abs(f[0]-f[1]));
    else
    {
          sum=0;
          sort(f,f+r);
        if(r%2==0)
        {
            n=r/2;

            for(i=0;i<r;i++)
            {
                sum=sum+abs(f[n-1]-f[i]);
            }
              printf("%lld\n",sum);
        }
        else
        {
            n=(r/2);
            for(i=0;i<r;i++)
            sum=sum+abs(f[n]-f[i]);
            printf("%lld\n",sum);
        }
    }
    T--;
}
    return 0;
}
