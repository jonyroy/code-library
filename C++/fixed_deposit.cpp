#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
class deposit
{
    long int principal;
    long interest;
    float in_percent;
    long int years;
    float total;
public :
    deposit(){}
    deposit(long int prin,long y,long in);
    deposit(long int prin,long y,float in);
    void display(void);
};
deposit::deposit(long a,long b,long c)
{
    principal=a;
    years=b;
    in_percent=c;
    total=principal;
    for(long int i=1;i<=years;i++)
    {
        total=total+(total*(float)in_percent)/100.0;
    }
}
deposit::deposit(long a,long b,float c)
{
    principal=a;
    years=b;
    in_percent=c;
    total=principal;
    for(long int i=1;i<=years;i++)
    {
        total=total+(total*in_percent);
    }
}
void deposit::display(void)
{
    cout<<"Principal Amount="<<principal<<endl;
    cout<<"After "<<years<<" Years Total Amount="<<total<<endl;
}
int main()
{
    deposit a,b;
    long x,y,z;
    float p;
    cout<<"Enter Amount , Years And Percent In Decimal Form\n";
    cin>>x>>y>>z;
    a=deposit(x,y,z);
    cout<<"Enter Amount , Years And Percent In Percent Form\n";
    cin>>x>>y>>p;
    b=deposit(x,y,p);
    a.display();
    b.display();
    return 0;
}
