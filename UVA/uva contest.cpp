#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[50],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
