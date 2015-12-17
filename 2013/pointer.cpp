#include<cstdio>
using namespace std;
int func(char *a)
{
    printf("%d\n",&a[0]);
    return 0;
}
int main()
{
   int *p,x,n;
   char a[100];
   printf("%d\n",&a);
   //scanf("%d",&x);
   func(a+1);
   /*p=&x;
   *p=12;
   printf("%d %d %d %d\n",&x,&p,p,*p);*/
    return 0;
}
