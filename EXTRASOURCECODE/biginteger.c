#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#define MAX 1000

void reverse(char *from,char *to)
{
  int len=strlen(from);
  int l;
  for(l=0;l<len;l++)
  to[l]=from[len-l-1];
  to[len]='\0';
}
void call_sum(char *first,char *sec,char *result)
{

}

int main()
{
return 0;
}
