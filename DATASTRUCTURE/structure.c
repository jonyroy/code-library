#include<stdio.h>
struct student{

char name[50];
int roll;
float cgpa;
long int id;
};
int main()
{

    struct student jony;
    printf("%d\n",sizeof(jony));
}
