//Accepted
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 100050
char a[MAX],b[MAX];
int main()
{

    long int T,t,i=1,j,k;
    scanf("%ld",&T);
    while(i<=T)
    {
        scanf("%s",a);
        scanf("%ld",&t);
        j=1;
        while(j<=t)
        {
            scanf("%s",b);
            if(strstr(a,b)==NULL)
            printf("n\n");
            else
            printf("y\n");
            j++;
        }
        i++;
    }
    return 0;
}
