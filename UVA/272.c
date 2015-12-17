//Accepted
#include<stdio.h>
int main()
{
    char ch;
    int count=0;
    while((ch=getchar())!=EOF)
    {
      if(ch==34)
      {
      count++;
      if(count%2==0)
      printf("''");
      else
      printf("``");
      }
      else
      printf("%c",ch);
    }
    return 0;
}
