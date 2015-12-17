#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char word[25],d;
    int s,sum,l,i,n,count;
  while(scanf("%s",word)!=EOF)
    {
    l=strlen(word);
     sum=0;
    for(i=0;i<l;i++)
    {
        d=word[i];
     if(d>='a'&&d<='z')
     {
         s=d-96;
        }
     else if(d>='A'&&d<='Z')
     {
        s=d-38;
       }
      sum=sum+s;
    }
    n=sqrt(sum);
    if(sum!=1)
    {
   count=0;
 for(i=2;i<=n;i++)
if(sum%i==0)
       break;

if(count==0)
printf("It is a prime word.\n");
else
printf("It is not a prime word.\n");
}
else
printf("It is a prime word.\n");
 }
    return 0;
}
