#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{

    char s[100],b[100];
    int i,len;
    gets(s);
    len=strlen(s);
    for(i=len-1;i>=0;i-=2)
    {
      sum=(s[0]-48)+(s[2]-48);
    }
    return 0;
}
