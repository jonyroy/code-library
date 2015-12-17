//list14.cpp

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    cout << "\nThis program illustrates the swap() member function "
        "for list objects.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    list<int> lst1(5, 5);
    cout << "\nFor lst1 we have:";
    cout << "\nSize = " << lst1.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst1.begin();
    while (p!= lst1.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    list<int> lst2(10, 10);
    cout << "\nFor lst2 we have:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p!= lst2.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we swap lst1 and lst2 with lst1.swap(lst2) and redisplay.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst1.swap(lst2);
    cout << "\nFor lst1 we have:";
    cout << "\nSize = " << lst1.size();
    cout << "\nContents: ";
    p = lst1.begin();
    while (p!= lst1.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    cout << "\nFor lst2 we have:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p!= lst2.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
