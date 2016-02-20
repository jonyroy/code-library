#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,r=0,t=0,dim;
    char c='0',d='*',m[105][105],arr[100][100];
    scanf("%d",&dim);
    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
    {scanf("%c",&d);
    arr[i][j]=d      ;}
    }

      for(j=0;j<=104;j++)
   {
    for(i=0;i<=104;i++)
   {
       if((i==0||i>dim)||(j==0||j>dim))
       m[j][i]=c;
       else
       {
           if(t>dim)
           {r=r+1;t=0;}
           d=arr[r][t++];
           m[j][i]=d;
       }
   }
   }
    printf("\n================\n");
    for(i=0;i<10;i++)
    {
    for(j=0;j<10;j++)
    printf("%c",m[i][j]);
    printf("\n");
    }
    return 0;
}
