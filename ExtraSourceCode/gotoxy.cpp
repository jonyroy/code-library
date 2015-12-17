#include<windows.h> //  header file for gotoxy
#include <stdio.h>     //header file for standard input output
COORD coord={0,0}; // this is global variable
                                //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
  int main()
  {
        for(int j=0;j<=40;j++)
        {
           gotoxy(j,10);
           printf("--");
           //Sleep(200);
           //system("CLS");
        }
        for(int j=0;j<=20;j++)
        {
           gotoxy(20,j);
           printf("|");
           //Sleep(200);
           //system("CLS");
        }
        /*for(int j=0;j<=20;j++)
        {
           gotoxy(0,j);
           printf("*");
           Sleep(200);
           //system("CLS");
        }
        for(int j=0;j<=20;j++)
        {
           gotoxy(j,22);
           printf("*");
           Sleep(200);
           //system("CLS");
        }*/
      /*for(int i=0;i<=20;i++)
      for(int j=0;j<=20;j++)
        {
           gotoxy(j,i);
           printf(".....");
           Sleep(200);
           //system("CLS");
        }
        */
        int a,b;
        printf("\n");
        scanf("%d%d",&a,&b);
        gotoxy(a+21,10-b);
        printf("o");
        getchar();
        getchar();
   return 0;
  }
