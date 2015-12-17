#include<stdio.h>
#include<string.h>
int main()
{
  long int sum=0,money,T;
  char opcode[8],d[8]="donate",r[8]="report";
scanf("%ld",&T);
while(T)
{
scanf("%s",opcode);
if((strcmp(opcode,d))==0)
{
    scanf("%ld",&money);
  sum=sum+money;
}
else
printf("%ld\n",sum);
T--;

}


return 0;
}
