#include<stdio.h>
int boishakh(long int,long int ,long int);
int Joishtho(long int,long int ,long int);
int Asharh(long int,long int ,long int);
int Srabon(long int,long int ,long int);
int Bhadro(long int,long int ,long int);
int Ashshin(long int,long int ,long int);
int Kartik(long int,long int ,long int);
int Ogrohaeon(long int,long int ,long int);
int Poush(long int,long int ,long int);
int Magh(long int,long int ,long int);
int Falgun(long int,long int ,long int);
int Choitro(long int,long int ,long int);
int main()
{
    long int year,day,month;
    printf("Enter The Day Month Year In AD Format\n");
    while((scanf("%ld%ld%ld",&day,&month,&year))!=EOF)
    {
        if(month>12)
            printf("Invalid Input.\nPlease Check Your Input..........\n");
        else
            switch(month)
            {
            case 1:
                Magh(day,month,year);
                break;
            case 2:
                Falgun(day,month,year);
                break;
            case 3:
                Choitro(day,month,year);
                break;
            case 4:
                boishakh(day,month,year);
                break;
            case 5:
                Joishtho(day,month,year);
                break;
            case 6:
                Asharh(day,month,year);
                break;
            case 7:
                Srabon(day,month,year);
                break;
            case 8:
                Bhadro(day,month,year);
                break;
            case 9:
                Ashshin(day,month,year);
                break;
            case 10:
                Kartik(day,month,year);
                break;
            case 11:
                Ogrohaeon(day,month,year);
                break;
            case 12:
                Poush(day,month,year);
                break;
            }
        printf("\n");
    }
    return 0;
}
int boishakh(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=30&&month<13&&year>1000)
    {
        if(day<14)
        {
            bangla=year-594;
            date=day+17;
            printf("%ld-Choitro-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-13;
            printf("%ld-Boishakh-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Joishtho(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=31&&month<13&&year>1000)
    {
        if(day<15)
        {
            bangla=year-593;
            date=day+17;
            printf("%ld-boishakh-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-14;
            printf("%ld-Joishtho-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Asharh(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=30&&month<13&&year>1000)
    {
        if(day<15)
        {
            bangla=year-593;
            date=day+17;
            printf("%ld-Joishtho-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-14;
            printf("%ld-Asharh-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Srabon(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=31&&month<13&&year>1000)
    {
        if(day<16)
        {
            bangla=year-593;
            date=day+16;
            printf("%ld-Asharh-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-15;
            printf("%ld-Srabon-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Bhadro(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=31&&month<13&&year>1000)
    {
        if(day<16)
        {
            bangla=year-593;
            date=day+16;
            printf("%ld-Srabon-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-15;
            printf("%ld-Bhadro-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Ashshin(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=30&&month<13&&year>1000)
    {
        if(day<16)
        {
            bangla=year-593;
            date=day+15;
            printf("%ld-Bhadro-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-15;
            printf("%ld-Ashshin-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Kartik(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=31&&month<13&&year>1000)
    {
        if(day<16)
        {
            bangla=year-593;
            date=day+15;
            printf("%ld-Ashshin-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-15;
            printf("%ld-Kartik-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Ogrohaeon(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=30&&month<13&&year>1000)
    {
        if(day<15)
        {
            bangla=year-593;
            date=day+16;
            printf("%ld-Kartik-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-14;
            printf("%ld-Ogrohaeon-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Poush(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=31&&month<13&&year>1000)
    {
        if(day<15)
        {
            bangla=year-593;
            date=day+16;
            printf("%ld-Ogrohaeon-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-593;
            date=day-14;
            printf("%ld-Poush-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Magh(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=31&&month<13&&year>1000)
    {
        if(day<14)
        {
            bangla=year-594;
            date=day+17;
            printf("%ld-Poush-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-594;
            date=day-13;
            printf("%ld-Magh-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Falgun(long int day,long int month,long int year)
{
    long int date,bangla,leapyear;
    if((year%4==0&&year%100!=0)||year%400==0)
        leapyear=29;
    else
        leapyear=28;
    if(day<=leapyear&&month<13&&year>1000)
    {
        if(day<13)
        {
            bangla=year-594;
            date=day+18;
            printf("%ld-Magh-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-594;
            date=day-12;
            printf("%ld-Falgun-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
int Choitro(long int day,long int month,long int year)
{
    long int date,bangla;
    if(day<=31&&month<13&&year>1000)
    {
        if(day<15)
        {
            bangla=year-594;
            date=day+14;
            printf("%ld-Falgun-%ld\n",date,bangla);
        }
        else
        {
            bangla=year-594;
            date=day-14;
            printf("%ld-Choitra-%ld\n",date,bangla);
        }
    }
    else
        printf("Invalid Input.\nPlease Check Your Input..........\n");
    return 0;
}
