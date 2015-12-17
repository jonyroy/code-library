#include<stdio.h>
int B_date(int x,int y,int  z)
{
    printf("My Birth Date Is :%d-%d-%d\n",x,y,z);
    return 0;
}
struct birthdate
    {
        int day;
        int month;
        int year;
    };
int main()
{
    //int a;
    //printf("%d\n",sizeof(a));
    /*struct birthdate
    {
        int day;
        int month;
        int year;
    };*/
    struct birthdate date[100],mon;
    //printf("%d\n",sizeof(date[0]));
    scanf("%d%d%d",&date[0].day,&date[0].month,&date[0].year);
    mon=date[0];
    B_date(mon.day,mon.month,mon.year);
   // B_date(date[0].day,date[0].month,date[0].year);
    return 0;
}
