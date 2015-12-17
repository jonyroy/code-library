#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#define MAX 100000
int main()
{
    char line[MAX],re[MAX];
    long int i,len,count,v,j,k;
    bool test;
    while(gets(line))
    {
      len=strlen(line);
      i=0;
      count=0;
      while(i<len)
      {
       j=0;
       test=false;
        while(isalpha(line[i]))
        {
         test=true;
         i++;
        }
        if(test==true)
        count++;
        i++;
      }
      printf("%ld\n",count);
    }
    return 0;
}
