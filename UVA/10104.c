#include<stdio.h>
int main()
{
    long int A,B,X,Y,D,i,T,r,a,b;
    while(scanf("%ld%ld",&A,&B)!=EOF)
    {

      if(A>B)
      {
          T=A;
          A=B;
          B=T;
      }
      a=A;
      b=B;
      while(B!=0)
      {
          r=A%B;
          A=B;
          B=r;
      }
      r=A;
 if(a==r||b==r)
 {
 X=0;
 Y=1;
 }
 else
 {

 }
printf("%ld %ld %ld\n",X,Y,r);
    }
    return 0;
}
