#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
float med1,med2,med3;
float area,s,a,b,c,x;


while((scanf("%f%f%f",&med1,&med2,&med3))    )
{

if((med1+med2)>med3 && (med1+med3)>med2 && (med2+med3)>med1)
{
s=(med1+med2+med3)*0.5;
x=sqrt(s*(s-med1)*(s-med2)*(s-med3));
area=(4.000*x)/3.000;
}
else
area=-1.000;

if(area>0)
printf("%.3f\n",area)
else
printf("-1.000\n");
}


return 0;
}
