#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[25],second_name[25];
    int i,j,len1,len2,a,b,c,sum,suma;
    float value1;
    while(gets(first_name))
    {
    gets(second_name);
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
    printf("%.2f %c\n",value1,37);
    }
    return 0;
}
