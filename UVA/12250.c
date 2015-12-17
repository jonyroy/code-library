#include<stdio.h>
#include<string.h>
int main()
{
    long int donate,sum=0,T=1,l;
    char eng[20]="HELLO",spa[20]="HOLA",ger[20]="HALLO",var[20];
    char fre[20]="BONJOUR",ita[20]="CIAO",rus[20]="ZDRAVSTVUJTE";
    while(1)
    {
    scanf("%s",var);

    if((strcmp(var,"#"))==0)
    break;

    if((strcmp(var,eng))==0)
printf("Case %d: ENGLISH\n",T);
else if((strcmp(var,spa))==0)
printf("Case %d: SPANISH\n",T);
else if((strcmp(var,ger))==0)
printf("Case %d: GERMAN\n",T);
else if((strcmp(var,fre))==0)
printf("Case %d: FRENCH\n",T);
else if((strcmp(var,ita))==0)
printf("Case %d: ITALIAN\n",T);
else if((strcmp(var,rus))==0)
printf("Case %d: RUSSIAN\n",T);
else
printf("Case %d: UNKNOWN\n",T);

T++;
}
    return 0;
}
