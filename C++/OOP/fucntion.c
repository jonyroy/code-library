#include<stdio.h>
#include<math.h>
//using namespace std;
int cnt(int,int,int);
int main()
{
    int a=sqrt('k');
    printf("%d\n",a);
    int b=cnt(1,2,4);
    printf("%d\n",b);
    return 0;
}
int cnt(int a,int b,int c)
{
    return a+b+c;
}
