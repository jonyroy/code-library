#include<stdio.h>
int main()
{
    int link[20]={0,3,6,5,0,9,7,8,10,4,1},i=1,j,start;
    char info[20][20]={"0","Shahin Vai","Jony","Mou Moni","Bunu","Ritu","Shivazi","Forhad","Sizer","Hiron","Mithun"};
    printf("Start=");
    scanf("%d",&start);
    while(start>0)
    {
        printf("%d. %s\n",i,info[start]);
        start=link[start];
        i++;
    }
    return 0;
}
