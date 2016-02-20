#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
int main()
{
    int gd=DETECT,gm,x,y,x1,y1,x2,y2,dx,dy,xi,yi,s;
    initgraph(&gd,&gm,"");
    setcolor(RED);
    printf("Enter the value of first pixel");
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of second pixel");
    scanf("%d%d",&x2,&y2);
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    s=max(dx,dy);
   xi=round((double)dx/(double)s);
   yi=round((double)dy/(double)s);
   x=x1;
   y=y1;
   putpixel(x,y,RED);
   for(int i=0;i<s;i++)
   {
       x=x+xi;
       y=y+yi;
       putpixel(x,y,RED);

   }
   getch();
   closegraph();
   return 0;

}
