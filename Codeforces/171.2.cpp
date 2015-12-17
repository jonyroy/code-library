#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    long n,t,a[1050],i,count=0;
    scanf("%ld",&n,&t);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    sort(a,a+n);
    printf("%ld\n",a[1]);
    /*for(i=0;i<n;i++)
    {
        if(t>=a[i])
        {
        t=t-a[i];
        count++;
        }
        else
        break;
    }
    printf("%ld\n",count);*/
    return 0;
}
