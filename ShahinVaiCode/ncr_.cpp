#include<stdio.h>
//ncr=n*(n-1)*(n-2)*....*(n-r+1)/(1*2*3*...*(r-1)*r)
long int ncr(int n,int r)
{
    int i,b=1;
 for(i=1;i<=r;i++)
 {
     b=b*n/i;
     n--;
 }
 return b;
 }
 int main()
 {
     long int n,c,r;
     scanf("%ld%ld",&n,&r);
     c=ncr(n,r);
     printf("%ld",c);
  return 0;
 }
