#include<stdio.h>
int mul_tiplication();
int divi_tion();
int main()
{

    int b,c;
    char a,e;
     read:
    printf("\nEnter A Charecter:");
    scanf("%c",&a);
    switch(a)
    {
        case '/':
        divi_tion();
        break;
        case '*':
        mul_tiplication();
        break;
        default:
        printf("Nothing.");
    }
    return 0;
}
int divi_tion()
{

    float a,b,c;
    printf("\nEnter Two Values:");
    scanf("%f%f",&a,&b);
    c=a/b;
    printf("\nDivision=%.2f\n",c);
    return 0;
}
int mul_tiplication()
{
     float a,b,c;
    printf("\nEnter Two Values: ");
    scanf("%f%f",&a,&b);
    c=a*b;
    printf("Multiplication=%.2f\n",c);
    return 0;
}
int add_ition()
{
    float a,b,c;
    printf("\nEnter THe")
    return 0;
}
