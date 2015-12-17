//Accepted
#include<stdio.h>
int main()
{
    int n,m,i,j=1;
    while(1)
    {
     scanf("%d",&n);
     if(n<0)
     break;
     m=1;
     i=0;
     while(m<n)
     {
         m=2*m;
         i++;
     }
     printf("Case %d: %d\n",j,i);
     j++;
    }
    return 0;
}
