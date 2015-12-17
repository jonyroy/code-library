    #include<stdio.h>
    int main()
    {
    int c,i,j,k,l,lim,wav,v;
    while(scanf("%d",&c)==1)
    {
    for(v=1;v<=c;v++)
     {
      scanf("%d%d",&lim,&wav);
     for(i=1;i<=wav;i++)
      {
        for(j=1;j<=lim;j++)
          {
           for(k=1;k<=j;k++)
              {
                printf("%d",j);
              }
              printf("\n");
          }
      for(l=lim-1;l>=1;l--)
       {
        for(k=1;k<=l;k++)
         {
          printf("%d",l);
         }
        printf("\n");
       }
    printf("\n");
    }
    }
    }
    return 0;
    }
