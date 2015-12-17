//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    int fakeh,fakem,realh,realm,T,h,m;
    char ch;
     scanf("%d",&T);
     while(T)
     {
         scanf("%d%c%d",&fakeh,&ch,&fakem);
          if(fakem==0)
          {
              h=12-fakeh;
              if(h==0)
              {
                  h=12;
              printf("%d:00\n",h);
              }
              else
              printf("%02d:00\n",h);

          }
          else
          {
             m=60-fakem;
             if(fakeh==12)
             h=12-1;
             else
             h=(12-fakeh-1);
             if(h==0)
             {
              h=12;
              printf("%02d:%02d\n",h,m);
             }
             else
             printf("%02d:%02d\n",h,m);
          }
         T--;
     }
    return 0;
}
