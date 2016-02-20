#include<stdio.h>
int main()
{
int x,y,z;
while(scanf("%d%d",&x,&y)!=EOF)
{
    z=x|y;
    printf("OR Oparetion: %d | %d = %d\n",x,y,z);
    z=x&y;
    printf("And Oparetion: %d & %d = %d\n",x,y,z);
    z=x^y;
    printf("X-OR Oparetion: %d ^ %d = %d\n",x,y,z);
    z=x<<2;
    printf("Left Shift Oparetion: %d << 2 = %d\n",x,z);
    z=x>>2;
    printf("Right Shift Oparetion: %d >> 2 = %d\n",x,z);
    z=~x;
    printf("Bitwise Not Oparetion: ~ %d = %d\n",x,z);
}
    return 0;
}

