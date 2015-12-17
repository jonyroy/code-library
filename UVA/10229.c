#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int store[15005]={0,1};
int fibbonacci()
{
     int i;
    for(i=2;i<=15000;i++)
    {
        store[i]=(store[i-1]+store[i-2])%10000;
    }
}
