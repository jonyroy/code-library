#include <stdio.h>
#include <time.h>
#include<string.h>
#include<windows.h>
int main(void)
{
  time_t t;
  char  ch;
  int n,i;
  while(1)
  {

   t = time(NULL);
   now= ctime(&t);
   printf("%s\n", ctime(&t));
   system("CLS");
   Sleep(1);
  }
  return 0;
}
