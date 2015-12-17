//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[100],copy[100];
    long int i,h,m,s,len,j,k,val[10],speed=0,l,test;
    float a,b,c,d,hour,tohour,tim=0,distance=0,timer=0.0;
    while(gets(str))
    {
        test=0;
        len=strlen(str);
               l=0;
                while(str[l]!=':')
                {
                    copy[l]=str[l];
                    l++;
                }
                copy[l]='\0';
                h=atol(copy);
                copy[0]=str[l+1];
                copy[1]=str[l+2];
                copy[2]='\0';
                m=atol(copy);
                copy[0]=str[l+4];
                copy[1]=str[l+5];
                copy[2]='\0';
                s=atol(copy);
                tohour=(float)h+(float)(m/60.0)+(float)(s/3600.0);
                for(i=8;i<len;i++)
                {
                if(str[i]==32)
                {
                test=1;
                j=0;
                distance=distance+(tohour-tim)*speed;
                for(k=i+1;k<len;k++)
                {
                    copy[j++]=str[k];
                }
                copy[j]='\0';
                speed=atol(copy);
                tim=tohour;
                break;
                }
                }
                if(test==0)
                {
                    b=(tohour-tim)*speed+distance;
                    printf("%s %.2f km\n",str,b);
                }
    }
    return 0;
}
