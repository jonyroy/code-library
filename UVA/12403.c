#include<stdio.h>
#include<string.h>
int main()
{
    long int donate,sum=0,T,l;
    char opcode[10],cha[10]="donate";
    scanf("%ld",&T);
    while(T)
    {

        scanf("%s",opcode);
        if((strcmp(cha,opcode))==0)
        {
            scanf("%ld",&donate);
            sum=sum+donate;
        }
        else
        printf("%ld\n",sum);
        T--;
    }
    return 0;
}
