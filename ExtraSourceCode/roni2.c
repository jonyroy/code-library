#include<stdio.h>
int main()
{
 int stl,sub,dpt,job1,job2,job3,job4,job5,job6,job7,job8;
 char ans;
 printf("\n                    KUSHTA TECHNOLOGY CORNER (KTC)\n\n                         Application Form\n\n\n\n ");
 printf("PEALSE FILL UP THE FORM\n\n");
 printf("At first we want to tell you that we have some requirement.\nyou have to agree with this requirement before fill up this form");
 printf("\n\nREQUIREMENTS:\n\n1.Your grade of all examination must be upto 3.00 in 4.00 and upto 4.00 in 5.00\n2.Your nationality must be Bangladeshi\n3.Your hight must be upto 5.2''");
 printf("\n\nType Y for yes\n");
ans=getchar();
 if(ans=='Y'||ans=='y')
 {
 printf("\n\nSelect your stduy level from below:");
 printf("\n\n1.under SSC\n2.SSC\n3.HSC\n4.B.Sc\n5.M.Sc");
 printf("\n\nType here..._\b");
 scanf("%d",&stl);
 if(stl==1)
  printf("\nYour stduy level: Under SSC\n");
 else if(stl==2)
  printf("\nYour stduy level:SSC\n");
else if(stl==3)
 printf("\nYour stduy level: HSC\n");
else if(stl==4)
 printf("\nYour stduy level: B.Sc\n");
else if(stl==5)
 printf("\nYour study level:M.Sc\n");
if(stl==4||stl==5)
{
printf("Select your subject from below\n");
printf("\n1.IT\n2.CSE\n3.EEE\n4.APECE");
printf("\n\nType here....._\b");
scanf("%d",&sub);
if(sub==1)
 printf("\nYou have studied about IT\n");
else if(sub==2)
 printf("\nYou have stdueid about  CSE\n");
else if(sub==3)
 printf("\nYou have stdueid about  EEE\n");
else if(sub==4)
 printf("\nYou have stdueid about  APECE\n");
  if(stl==5&&sub==1||stl==4&&sub==1)
  {
   printf("Three type of job are available for you\these are:\n\n1.General Manager of communication sector\n2.Second Manager of Product supplying sector\n3.Second manager of Softwer sector");
   printf("\n\nSelect your job.....\n");
   scanf("%d",&job1);
  }
   if(job1==1)
    printf("\nCongrats, you are approved as GM of communication sector in our office\n ");
   else if(job1==2)
   printf("\nCongrats, you are approved as Second Manager of product supplying sector in our office ");
  else if(job1==3)
     printf("\nCongrats, you are approved as Second Manager of software sector in our office ");

    if(stl==5&&sub==3||stl==4&&sub==3)
  {
    printf("\none type of job are available for you\n\n1.General Manager of Hardware sector\n");
    printf("\n\nSelect your job....._");
    scanf("%d",&job2);
  }
    if(job2==1)
  printf("\nCongrats, you are approved as GM of Hardware sector in our office ");

   if(stl==4&&sub==2||stl==5&&sub==2)
   {
    printf("\ntwo type of job are available for you\these are:\n\n1.assitant manager of marcketing sector\n2.General manager of Software sector");
    printf("\n\nSelect your job....._");
    scanf("%d",&job3);
   }
    if(job3==1)
     printf("\nCongrats, you are approved as assitant manager of marcketing sector in our office ");
    else if(job3==2)
    printf("\nCongrats, you are approved as GM of Software sector in our office ");

  if(stl==4&&sub==4||stl==5&&sub==4)
  {
    printf("\ntwo type of job are available for you\these are:\n\n1.General manager of marcketing sector\n2.General manager of Hardware sector");
    printf("\n\nSelect your job....._");
    scanf("%d",&job4);
  }
    if(job4==1)
     printf("\nCongrats, you are approved as General manager of marcketing sector in our office ");
    else if(job4==2)
     printf("\nCongrats, you are approved as GM of Hardware sector in our office ");

}
else if(stl==2||stl==3)
{
 printf("\nSelect your department from below\n");
 printf("\n1.Science\n2.Arts\n3.Business studies");
 printf("\n\nselect here....");
 scanf("%d",&dpt);
}

  if(dpt==1)
  {
  printf("you studeid about science\n");
 printf("\n\nthere is a kind of job are avalible for you.\nyou can work in our office as salesman\n");
 printf("\n\nif you agree press 1\n");
 scanf("%d",&job5);

   if(job5==1)
    printf("congrats. you are approved as salesman of our company");
  }
  else if(dpt==2)
  {
  printf("you studeid about Arts\n");
   printf("two kind of job are available for you\n1.fieldman\n2.washman\n\n");
   printf("Select here.......");
  scanf("%d",&job6);

  if(job6==1)
   printf("\ncongrats. you are approved as fieldman of our company");
   if(job6==2)
   printf("\ncongrats. you are approved as washman of our company");
  }
  else if(dpt==3)
  {
   printf("you studeid about Business Studies\n");
   printf("two kind of job are available for you.\n\n1.fieldman\n2.salesman");
   printf("\n\nSelect here........");
   scanf("%d",&job8);
   if(job8==1)
   printf("\ncongrats. you are approved as fieldman of our company");
   if(job8==2)
     printf("congrats. you are approved as salesman of our company");
  }

 }

else if(stl==1)
{
 printf("\n\nyou need not  have any academic records");
 printf("\n\none kind of job are available for you.\n1.night gard\n\n ");
 printf("if you agree , then press 1\n");
 scanf("%d",&job7);
}
 if(job7==1)
  printf("\ncongrats. you are approved as night gard in our company\n");

printf("\n\n\n\n\n\n\n               BY RONNY\n               ICE dept.\n           Roll No-1218033\n          Islamic University\n");
return 0;
}

