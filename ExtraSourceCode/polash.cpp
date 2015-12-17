#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
struct car
{
    char company[100];
    char model[100];
    int reg_year;
    float price;
};
int main()
{
    car a[100];
    int n,cou=0;
    printf("Enter How Many Cars You Have=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter Company Name:");
        scanf("%s",a[i].company);
        printf("Enter Model Name:");
        scanf("%s",a[i].model);
        printf("Enter Reg_Year:");
        scanf("%d",&a[i].reg_year);
        printf("Enter Price:");
        float b;
        scanf("%f",&b);
        a[i].price=b;
        if(strcmp(a[i].company,"toyata")==0&&a[i].reg_year==2004&&a[i].price==200000.0)
            cou++;
            printf("\n");
    }
    printf("The number of cars that are manufactured by");
    printf(" toyota company and that are registered in 2004 and price is above");
    printf(" 200000=%d\n",cou);
    return 0;
}
