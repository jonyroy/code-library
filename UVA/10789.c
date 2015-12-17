#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define MAX 30000
int store[MAX]={0};
int main()
{
    int i,j,n,m,number,T,len;
    char str[10000];
    bool test;
    for(i=2;i<=(int)(sqrt((double)MAX));i++)
    {
      if(store[i]==0)
      {
          for(j=i*i;j<=MAX;j+=i)
          {
              store[j]=1;
          }
      }
    }
    store[0]=1;
    store[1]=1;
    scanf("%d",&T);
    i=1;
    while(i<=T)
    {
        int count[200]={0};
        scanf("%s",str);
        len=strlen(str);
        for(j=0;j<len;j++)
        count[str[j]]++;
        test=false;
        printf("Case %d: ",i);
        for(j=48;j<=122;j++)
        {
            if(store[count[j]]==0)
            {
            printf("%c",j);
            test=true;
            }
        }
        if(test==false)
        printf("empty");
        printf("\n");
        i++;
    }
    return 0;
}
