//list13.cpp

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    cout << "\nThis program illustrates the resize() member "
        "function for list objects.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    list<int> lst1;
    cout << "\nTo begin we have, for lst1:";
    cout << "\nSize = " << lst1.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst1.begin();
    while (p != lst1.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst1.resize(4);
    cout << "\nAfter lst1.resize(4) we have, for lst1:";
    cout << "\nSize = " << lst1.size();
    cout << "\nContents: ";
    p = lst1.begin();
    while (p != lst1.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    list<int> lst2(10, 3);
    cout << "\nTo begin we have, for lst2:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst2.resize(8);
    cout << "\nAfter lst2.resize(8) we have, for lst2:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst2.resize(12);
    cout << "\nAfter lst2.resize(12) we have, for lst2:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst2.resize(6, -1);
    cout << "\nAfter lst2.resize(6, -1) we have, for lst2:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst2.resize(10, -1);
    cout << "\nAfter lst2.resize(10, -1) we have, for lst2:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst2.resize(20, -2);
    cout << "\nAfter lst2.resize(20, -2) we have, for lst2:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
