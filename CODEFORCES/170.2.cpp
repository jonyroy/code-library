#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    int s,t,n[105],i,j,m,sum=0,suma=0,min=50000;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    scanf("%d",&n[i]);
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        s=b;t=a
    }
    else
    {
        s=a;t=b;
    }
    if(s==t)
    printf("0\n");
    else
    {
        for(i=t;i<s;i++)
        sum=sum+n[i];
        for(i=s;i>t;i--)
        suma=suma+n[i];
        if(sum>suma)
            min=suma;
            else
            min=sum;
            if(s==1)
            {
                for(i=t;i>s;i--)
                su=su+n[i];
                if(su<min)
                min=su;
            }
            else{
                sum=0;
                if(){

                for(i=s;i>1;i--)
                sum=sum+n[i];
                }
                for(i=n;i>t;i--)
                sum=sum+n[i];
            }
        }
    return 0;
}
