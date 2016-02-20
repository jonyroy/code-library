#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int link[20]={0,3,6,5,0,9,7,8,10,4,1},i=1,j,start;
    bool test=false;
    char search[20];
    char info[20][20]={"0","Shahin Vai","Jony","Mou Moni","Bunu","Ritu","Shivazi","Forhad","Sizer","Hiron","Mithun"};
    printf("Searched Item=");
    scanf("%s",search);
    start=2;
    while(start>0)
    {
        if(strcmp(search,info[start])==0)
        {
            printf("Found Position at %d\n",start);
            test=true;
            break;
        }
        else
        start=link[start];
    }
    if(test==false)
    printf("Search Unsuccesfull.\n");
    return 0;
}
