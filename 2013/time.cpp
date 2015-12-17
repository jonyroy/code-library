#include <Windows.h>
#include <stdio.h>
int main()
{
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);
//int t=str_t.wDay;
//printf("%d\n",t);
    int p=str_t.wDayOfWeek;
    printf("%d\n",p);
	printf("Year:%d\nMonth:%d\nDate:%d\nHour:%d\nMin:%d\nSecond:% d\n"
	,str_t.wYear,str_t.wMonth,str_t.wDay
	,str_t.wHour,str_t.wMinute,str_t.wSecond);
	return 0;
}
