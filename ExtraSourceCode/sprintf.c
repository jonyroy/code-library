#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{

    char a[100]={'*','+','%'},c='/',m[1000]={0};
    int val,len,b[100]={1,2,3,4},n[100]={1,4,8,9},i;
    for(i=0;i<4;i++)
    {
      char buffer[100];
      if(i<3)
      sprintf(buffer,"%d%c%d%c",b[i],c,n[i],a[i]);
      else
      sprintf(buffer,"%d%c%d",b[i],c,n[i]);
      strcat(m,buffer);
    }

    /*scanf("%d",&val);
    sprintf(buffer,"%d",val);
    printf("%s\n",buffer);
    len=strlen(buffer);*/
    printf("%s",m);
    return 0;
}
