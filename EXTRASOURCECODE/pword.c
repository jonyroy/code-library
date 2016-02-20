#include<stdio.h>
#include<string.h>
int main()
{
  char word[21];
  int len,i,sum=0,isprime;
while((scanf("%s",word))!=EOF)
{
    sum=0;
    isprime=1;
    len=strlen(word);
    for(i=0;i<len;i++)
    {
        if(word[i]>='a'&&word[i]<='z')
        sum=sum+word[i]-96;
        else
        sum=sum+word[i]-64+26;
    }
    if(sum!=1)
    {
    for(i=2;i<sum;i++)
    {
        if(sum%i==0)
        {
            isprime=0;
            break;
        }

    }
    if(isprime==1)
    printf("It is a prime word.\n");
    else
    printf("It is not a prime word.\n");
    }
    else
    printf("It is a prime word.\n");

}
return 0;
}
