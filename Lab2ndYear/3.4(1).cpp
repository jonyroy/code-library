/*
3.4(1):
problem:
Imagine a situation in which two classes, called pr1 and pr2, shown here,share one printer.
Further,imagine that other parts of your program need to know when the printer is in use by an
object of either of these two classes. Create a function called inuse() that return true when
the printer is being used by either and false otherwise. Make this function a friend of both pr1 and pr2.
class pr1{
	int printing;
public:
   pr1(){printing = 0;};
   void set_print(int status){printing = status;}
};
class pr2{
	int printing;
public:
   pr2(){printing =0;}
   void set_print(int status){printing = status;}
};
*/
#include<iostream>
using namespace std;
class pr2;
class pr1{
    int printing;
public:
    pr1()
    {
        printing =0;
    }
    void set_print(int status){
        printing = status;
    }
    friend int inuse(pr1 o1, pr2 o2);
};
class pr2{
    int printing;
public:
    pr2(){printing = 0;}
    void set_print(int status){printing = status;}
    friend int inuse(pr1 o1,pr2 o2);
};
int inuse(pr1 o1, pr2 o2)
{
    if(o1.printing || o2.printing)
        return 1;
    else
        return 0;
}
int main()
{
    pr1 p1;
    pr2 p2;
    if(!inuse(p1,p2)) cout<<"Printer idle\n";
    cout<<"Settting p1 to printing...\n";
    p1.set_print(1);
    if(inuse(p1,p2)) cout<<"Now, printer in use.\n";
    cout<<"Turn off p1...\n";
    p1.set_print(0);
    if(!inuse(p1,p2)) cout<<"Printer idle\n";
    cout<<"Turn on p2...\n";
    p2.set_print(1);
    if(inuse(p1,p2)) cout<<"Now, printer in use.\n";
    return 0;
}
