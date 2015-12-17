#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    char first_name[25],second_name[25];
    int i,j,len1,len2,a,b,c,sum,suma;
    float value1;
    while(1)
    {
    printf("\n\n\n                 This Is Love Calculator.\n\nHow Much Do You Love Your Lover?\n\n");
    printf("   To Calculate The Percentage Of Your Love\n\n");
    printf("        Enter Your Name And Your Lover Name.....\n\n");
    scanf("%s",first_name);
    scanf("%s",second_name);
if(first_name=="exit"||second_name=="exit")
break;
    len1=strlen(first_name);
    len2=strlen(second_name);
    sum=0;
    for(i=0;i<len1;i++)
    {
        if(first_name[i]>='a'&&first_name[i]<='z')
        sum=sum+first_name[i]-96;
        if(first_name[i]>='A'&&first_name[i]<='Z')
        sum=sum+first_name[i]-64;
    }
    while(sum>9)
    {
        a=sum%10;
        b=sum/10;
        c=a+b;
        sum=c;
    }
    suma=0;
     for(i=0;i<len2;i++)
    {
        if(second_name[i]>='a'&&second_name[i]<='z')
        suma=suma+second_name[i]-96;
        if(second_name[i]>='A'&&second_name[i]<='Z')
        suma=suma+second_name[i]-64;
    }
    while(suma>9)
    {
        a=suma%10;
        b=suma/10;
        c=a+b;
        suma=c;
    }
    if(sum==suma)
    value1=((float)suma/(float)sum)*100.0;
    else
    if(sum>suma)
    value1=((float)suma/(float)sum)*100.0;
    else
    value1=((float)sum/(float)suma)*100.0;
    system("CLS");
    printf("\n Percentage=%.2f%c\n",value1,37);
    }
    return 0;
}
