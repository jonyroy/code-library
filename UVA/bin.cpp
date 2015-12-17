#include<stdio.h>

int main()
{

int dec=4;

int i;

for(i=128;i>0;i=i/2)
{
  //  printf("%d",(i&1));
if((dec&i)==0)
  printf("0");
else
  printf("1");
}


}
