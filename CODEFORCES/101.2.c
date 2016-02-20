#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{

    char a[105],b[105],c[105];
    int count[100]={0},cou[100]={0},i,len1,len2,len3;
    bool test=false;
    scanf("%s%s%s",a,b,c);
    len1=strlen(a);
    len2=strlen(b);
    len3=strlen(c);
    if(len3>len1+len2)
    printf("NO\n");
    else
    {
        for(i=0;i<len1;i++)
        {
            count[a[i]]++;
        }
        for(i=0;i<len2;i++)
        {
            count[b[i]]++;
        }
        for(i=0;i<len3;i++)
        {
            cou[c[i]]++;
        }
        for(i=65;i<=90;i++)
        {
            if(count[i]==cou[i])
            ;
            else
            {
            test=true;
            break;
            }
        }
        if(test==true)
         printf("NO\n");
         else
          printf("YES\n");
    }
    return 0;
}
