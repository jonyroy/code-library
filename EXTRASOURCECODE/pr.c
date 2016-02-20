#include<stdio.h>
int main()
{
    int i,count;
    scanf("%d",&i);
    count=1;
while(i!=1)
{
if(i%2==0)
i=i/2;
else
i=3*i+1;
count++;
}
printf("%d\n",count);
return 0;
}
