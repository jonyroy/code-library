#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
int i,j,k,len,temp,T,count;
char ch[100][100],charecter[100][100];
for(i=0;i<100;i++)
 for(j=0;j<100;j++)
  {
   ch[i][j]=0;
  }
  //printf("%d\n\n",ch[0][0]);
   i=0;
   while(scanf("%s",ch[i])!=EOF)
   {
    len=strlen(ch[i]);
    int val[200]={0};
    for(j=0;j<len;j++)
    {
        val[ch[i][j]]++;
    }
    /*for(j=0;j<len-1;j++)
    {
        if(val[ch[i][j]]>val[ch[i][j+1]])
        {
            temp=val[ch[i][j]];
            val[ch[i][j]]=val[ch[i][j+1]];
            val[ch[i][j+1]]=temp;
            T=ch[i][j];
            ch[i][j]=ch[i][j+1];
            ch[i][j+1]=T;
        }
    }*/

    for(j=1;j<=90;j++)
    {  count=0;
        for(k=j;k<90;k++)
        {
        if(val[j]>val[k+1])
        ;
        else
        {
            count++;
            break;
        }
        }
        if(count=0)
        T=
    }
    i++;
   }
    return 0;
}
